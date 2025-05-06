#include <iostream>

void entryExit() {
	int number;

	std::cout << "Digite um numero: ";
	std::cin >> number;

	if (number >= 10) {
		std::cout << "Numero maior ou igual a 10.";
	}
	else {
		std::cout << "Numero menor que 10.";
	}

	std::cout << std::endl;
}