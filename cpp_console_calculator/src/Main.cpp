#include <iostream>
#include <sstream>
#include <math.h>
#include <string>
#include <limits>
#include <ios>

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
		std::cout << "\n - Modulus : %";
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

			size_t idx = 0;
			std::string delimiter = " ";

			char operation;
			double firstOperand;
			double secondOperand;

			while (idx = calcText.find(' ', 0) != std::string::npos) {
				if (calcText.substr(0, idx) != delimiter) {

				}
				std::cout << calcText.substr(0, idx) << std::endl;
				calcText.erase(0, idx + 1);
				//idx = calcText.find(' ');
				
				
			}
			
			std::cout << calcText << std::endl;
			std::cout << atof(" ") << std::endl;
			std::cout << atof("1.1") << std::endl;

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