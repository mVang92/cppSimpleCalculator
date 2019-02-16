#include <iostream>
using namespace std;

void calc(int a, int b, short o) {
	int res;
	switch (o) {
	case 1:
		res = a + b;
		std::cout << "Result: " << a << " + " << b << " is " << res << ".\n";
		break;
	case 2:
		res = a - b;
		std::cout << "Result: " << a << " - " << b << " is " << res << ".\n";
		break;
	case 3:
		res = a * b;
		std::cout << "Result: " << a << " x " << b << " is " << res << ".\n";
		break;
	case 4:
		res = a / b;
		std::cout << "Result: " << a << " / " << b << " is " << res << ".\n";
		break;
	case 5:
		res = a % b;
		std::cout << "Result: " << a << " % " << b << " is " << res << ".\n";
		break;
	default:
		std::cout << "Bad input.\n";
	}
}

int main(void) {
	int firstNum;
	int secondNum;
	short oper;

	std::cout << "Enter the first value: ";
	std::cin >> firstNum;
	std::cout << "Enter the second value: ";
	std::cin >> secondNum;
	std::cout << "1: Addition\n";
	std::cout << "2: Subtraction\n";
	std::cout << "3: Multiplication\n";
	std::cout << "4: Division\n";
	std::cout << "5: Modulus\n";
	std::cout << "Select an operator by typing its number: ";
	std::cin >> oper;
	calc(firstNum, secondNum, oper);

}
