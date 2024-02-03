#include "header.hpp"

static void	move_contacts(int num, PhoneBook *phonebook){
	phonebook->contacts[num].Contact::get_fn() = phonebook->contacts[num + 1].Contact::get_fn();
	phonebook->contacts[num].Contact::get_ln() = phonebook->contacts[num + 1].Contact::get_ln();
	phonebook->contacts[num].Contact::get_nn() = phonebook->contacts[num + 1].Contact::get_nn();
	phonebook->contacts[num].Contact::get_pn() = phonebook->contacts[num + 1].Contact::get_pn();
	phonebook->contacts[num].Contact::get_ds() = phonebook->contacts[num + 1].Contact::get_ds();
}

void	add_contact(PhoneBook *phonebook){
	int num = -1;
	std::string	fn;
	std::string	ln;
	std::string	nn;
	std::string pn;
	std::string	ds;
	std::string input;

	std::cout << "First Name:";
	std::getline (std::cin, fn);
	if (!fn[0]){
		std::cout << "Error Fail, Field can not be empty. Returned to Menu\n";
		return ;
	}
	while (fn[++num]){
		if (!isalpha(fn[num])){
			std::cout << "Error Fail, First Name hast to be only letters. Returned to Menu\n";
			return ;
		}
	}
	std::cout << "Last Name:";
	std::getline (std::cin, ln);
	if (!ln[0]){
		std::cout << "Error Fail, Field can not be empty. Returned to Menu\n";
		return ;
	}
	num = -1;
	while (ln[++num]){
		if (!isalpha(ln[num])){
			std::cout << "Error Fail, Last Name hast to be only letters. Returned to Menu\n";
			return ;
		}
	}
	std::cout << "Nickname:";
	std::getline (std::cin, nn);
	if (!nn[0]){
		std::cout << "Error Fail, Field can not be empty. Returned to Menu\n";
		return ;
	}
	num = -1;
	while (nn[++num]){
		if (!isascii(nn[num])){
			std::cout << "Error Fail, Nickname hast to be only ascii characters. Returned to Menu\n";
			return ;
		}
	}
	std::cout << "Phone-Number:";
	std::getline (std::cin, pn);
	num = -1;
	if (!pn[0]) {
		std::cout << "Error Fail, Field can not be empty. Returned to Menu\n";
		return ;
	}
	while (pn[++num]){
		if (!isdigit(pn[num])){
			std::cout << "Error Fail, Phone Number hast to be only digits. Returned to Menu\n";
			return ;
		}
	}
	std::cout << "Darkest Secret:";
	std::getline (std::cin, ds);
	if (!ds[0]){
		std::cout << "Error Fail, Field can not be empty. Returned to Menu\n";
		return ;
	}
	num = -1;
	while (ds[++num]){
		if (!isascii(ds[num])){
			std::cout << "Error Fail, darkest secret hast to be only ascii characters. Returned to Menu\n";
			return ;
		}
	}
	if (phonebook->number == 8){
		num = 0;
		while (num < 7){
			move_contacts(num, phonebook);
			num++;
		}
		(phonebook->number)--;
	}
	phonebook->contacts[phonebook->number].set_values(fn, ln, nn, pn, ds);
	(phonebook->number)++;
}