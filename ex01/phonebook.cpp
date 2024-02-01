#include "header.hpp"

static void	move_contacts(int num, PhoneBook *phonebook){
	phonebook->contacts[num].first_name = phonebook->contacts[num + 1].first_name;
	phonebook->contacts[num].last_name = phonebook->contacts[num + 1].last_name;
	phonebook->contacts[num].nickname = phonebook->contacts[num + 1].nickname;
	phonebook->contacts[num].phone_number = phonebook->contacts[num + 1].phone_number;
	phonebook->contacts[num].secret = phonebook->contacts[num + 1].secret;
}

/*void Contact::set_values(Contact *contacts, char *fn, char *ln, char *nn, char *pn, char *ds) {
	contacts->first_name = fn;
	contacts->last_name = ln;
	contacts->nickname = nn;
	contacts->phone_number = pn;
	contacts->secret = ds;*/

/*void Contact::set_values(char *fn, char *ln, char *nn, char *pn, char *ds) {
	first_name = fn;
	last_name = ln;
	nickname = nn;
	phone_number = pn;
	secret = ds;*/

void	add_contact(PhoneBook *phonebook){
	int num = -1;
	std::string	fn;
	std::string	ln;
	std::string	nn;
	std::string pn;
	std::string	ds;
	std::string input;

	std::getline (std::cin, fn);
	if (!fn[0]){
		std::cout << "Error Fail, Field can not be empty. Returned to Menu\n";
		return ;;
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
	phonebook->contacts[phonebook->number].first_name = fn;
	phonebook->contacts[phonebook->number].last_name = ln;
	phonebook->contacts[phonebook->number].nickname = nn;
	phonebook->contacts[phonebook->number].phone_number = pn;
	phonebook->contacts[phonebook->number].secret = ds;
	//phonebook->contacts[phonebook->number]->set_values(fn, ln, nn, pn, ds);
	//Contact::set_values(&(phonebook->contacts[phonebook->number]), fn, ln, nn, pn, ds);
	(phonebook->number)++;
}