
#include <iostream>
#include <conio.h>


int main()
{
	int exit;
	do {
		double num1, num2;
		char op;
		std::cout << "Enter two operands\n";
		std::cin >> num1 >> num2;
		std::cout << "Enter operator\n";
		std::cin >> op;

		if (num2 == 0 && op == '/') {
		
			std::cout << "Invalid operation\n";
		}
		else {

			switch (op) {
			case '+':
				std::cout << "Result: " << num1 + num2 << "\nPress Esc to exit or continue\n";
				break;
			case '-':
				std::cout << "Result: " << num1 - num2 << "\nPress Esc to exit or continue\n";
				break;
			case '*':
				std::cout << "Result: " << num1 * num2 << "\nPress Esc to exit or continue\n";
				break;
			case '/':
				std::cout << "Result: " << num1 / num2 << "\nPress Esc to exit or continue\n";
				break;
			default:
				std::cout << "Invalid operator\n";
				break;
			}
		}

			exit = _getch();
		} while (exit != 27);
	

	return 0;
}
