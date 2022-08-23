#include <iostream>
#include <sstream>
#include <math.h>
#include <string>
#include <limits>
#include <ios>
#include <array>

int main(int argc, char* argv[]) {

	bool runCalculator = true;

	while (runCalculator)
	{
		int operation = 0;
		std::cout << "Welcome to the Calculator!";
		std::cout << "\n\nCurrently supported operators are...";
		std::cout << "\n - Multiply: x";
		std::cout << "\n - Divide : /";
		std::cout << "\n - Add: +";
		std::cout << "\n - Subtract : -";
		std::cout << "\n\nWhat would you like to do?\n 1. Perform Calculation\n 2. Exit Calculator\n" << std::endl;

		std::cin >> operation;

		switch (operation)
		{
		case 1: {
			std::string calcText;

			std::cout << "\nPlease enter your requested operator and values separated by spaces\n";
			std::cout << "Ex. Performing an Addition of 1 & 2 enter 1 + 2\n\n" << std::endl;
			
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			std::getline(std::cin, calcText);

			char operation = 'n';
			double operands[2] = {0,0};
			int operandIdx = 0;

			std::stringstream ss(calcText);
			std::string component;

			while (ss >> component) {
				if ( std::isdigit(component[0]) ) {
					operands[operandIdx] = atof(component.c_str());
					operandIdx++;
				}
				else {
					operation = component[0];
				}
			}
			
			double calcReturn;
			switch (operation)
			{
			case 'x':
				calcReturn = operands[0] * operands[1];
				break;
			case '/':
				calcReturn = operands[0] / operands[1];
				break;
			case '+':
				calcReturn = operands[0] + operands[1];
				break;
			case '-':
				calcReturn = operands[0] - operands[1];
				break;
			default:
				calcReturn = 0.0;
				break;
			}

			std::cout << "Calculation of " << operands[0] << " " << operation << " " << operands[1] << " = " << calcReturn << std::endl;
			break;
		}
		case 2: {
			runCalculator = false;
			break;
		}
		default:
			break;
		}
	}
}