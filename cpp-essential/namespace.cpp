#include <iostream>

namespace companyOneNamespace {
	class companyOneUsers {
	public:
		int id;
		std::string name;
		std::string email;
		std::string cpf;

		void show() {
			std::cout << "ID: " << id << "\n";
			std::cout << "Nome: " << name << "\n";
			std::cout << "Email: " << email << "\n";
			std::cout << "CPF: " << cpf << "\n";
		}
	};
}

void usingNamespace() {
	companyOneNamespace::companyOneUsers user;

	user.id = 1;
	user.name = "Usuario teste 1";
	user.email = "emailteste@gmail.com";
	user.cpf = "123.456.789-00";

	user.show();
}