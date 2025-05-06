#include <iostream>

void operationsBasic() {
	int a = 10;
	int b = 5;

	std::cout << "a + b = " << a + b << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "a * b = " << a * b << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "a % b = " << a % b << std::endl;

	int numberChosed;
	std::cout << "Digite um número e diremos se é par ou impar:" << std::endl;
	std::cin >> numberChosed;

	if (numberChosed % 2 == 0) {
		std::cout << "O numero " << numberChosed << " é par." << std::endl;
	}
	else {
		std::cout << "O numero " << numberChosed << " é impar." << std::endl;
	}
}