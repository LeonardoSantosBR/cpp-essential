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
	std::cout << "Digite um n�mero e diremos se � par ou impar:" << std::endl;
	std::cin >> numberChosed;

	if (numberChosed % 2 == 0) {
		std::cout << "O numero " << numberChosed << " � par." << std::endl;
	}
	else {
		std::cout << "O numero " << numberChosed << " � impar." << std::endl;
	}
}