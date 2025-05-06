#include <iostream>

void repeticoes() {
	//primeiro jeito feito por mim: 
	int i = 0;
	char* myName = new char[10]();
	bool isOver = false;
	for (i = 0; isOver == false; i++) {
		std::cout << "\n ----------------------------- \n";
		std::cout << "Digite a letra do seu nome: \n";
		std::cin >> myName[i];

		char isNameFinished;
		std::cout << "Seu nome esta completo? Sim: [s] , Nao: [n] = \n";
		std::cin >> isNameFinished;

		if (isNameFinished == 's' || isNameFinished == 'S') isOver = true;
	}
	std::cout << "SEU NOME É:" << myName << std::endl;

	//segundo jeito melhorado pela i.a
	std::string myNameTwo; //melhor jeito de declarar um array de string.
	bool isOverTwo = false;
	while (!isOver) {
		char letra;
		std::cout << "\n ------------------------------\n";
		std::cout << "Digite a letra do seu nome: ";
		std::cin >> letra;
		myNameTwo += letra;

		char isNameFinishedTwo;
		std::cout << "Seu nome está completo? Sim: [s], Não: [n]: ";
		std::cin >> isNameFinishedTwo;

		if (isNameFinishedTwo == 's' || isNameFinishedTwo == 'S') {
			isOverTwo = true;
		}
	}
	std::cout << "\nSEU NOME É: " << myNameTwo << std::endl;

}