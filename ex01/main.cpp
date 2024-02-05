#include "header.hpp"
#include "PhoneBook.hpp"
#include "Contact.hpp"

static void	move_contacts(int num, PhoneBook *phonebook){
	phonebook->PhoneBook::get_contact(num).Contact::get_fn() = phonebook->PhoneBook::get_contact(num).Contact::get_fn();
	phonebook->PhoneBook::get_contact(num).Contact::get_ln() = phonebook->PhoneBook::get_contact(num).Contact::get_ln();
	phonebook->PhoneBook::get_contact(num).Contact::get_nn() = phonebook->PhoneBook::get_contact(num).Contact::get_nn();
	phonebook->PhoneBook::get_contact(num).Contact::get_pn() = phonebook->PhoneBook::get_contact(num).Contact::get_pn();
	phonebook->PhoneBook::get_contact(num).Contact::get_ds() = phonebook->PhoneBook::get_contact(num).Contact::get_ds();
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
	if (phonebook->PhoneBook::get_number() == 8){
		num = 0;
		while (num < 7){
			move_contacts(num, phonebook);
			num++;
		}
		phonebook->set_number(-1);
	}
	phonebook->PhoneBook::set_contact(phonebook->PhoneBook::get_number(), fn, ln, nn, pn, ds);
	phonebook->set_number(1);
}

static void display_contact(Contact contact, int index){
	int num = -1;
	std::cout << "|        ";
	std::cout << index + 1;
	std::cout << "|";
	if (contact.Contact::get_fn().length() > 10) {
		std::cout << contact.Contact::get_fn().substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.Contact::get_fn().length())
			std::cout << " ";
		std::cout << contact.Contact::get_fn();
	}
	std::cout << "|";
	num = -1;
	if (contact.Contact::get_ln().length() > 10) {
		std::cout << contact.Contact::get_ln().substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.Contact::get_ln().length())
			std::cout << " ";
		std::cout << contact.Contact::get_ln();
	}
	std::cout << "|";
	num = -1;
	if (contact.Contact::get_nn().length() > 10) {
		std::cout << contact.Contact::get_nn().substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.Contact::get_nn().length())
			std::cout << " ";
		std::cout << contact.Contact::get_nn();
	}
	std::cout << "|\n";
}

static void	single_contact(Contact contact)
{
	int num = -1;
	std::cout << "    First Name|";
	if (contact.Contact::get_fn().length() > 10) {
		std::cout << contact.Contact::get_fn().substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.Contact::get_fn().length())
			std::cout << " ";
		std::cout << contact.Contact::get_fn();
	}
	std::cout << "|\n     Last Name|";
	num = -1;
	if (contact.Contact::get_fn().length() > 10) {
		std::cout << contact.Contact::get_fn().substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.Contact::get_ln().length())
			std::cout << " ";
		std::cout << contact.Contact::get_ln();
	}
	std::cout << "|\n      Nickname|";
	num = -1;
	if (contact.Contact::get_nn().length() > 10) {
		std::cout << contact.Contact::get_nn().substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.Contact::get_nn().length())
			std::cout << " ";
		std::cout << contact.Contact::get_nn();
	}
	std::cout << "|\n  Phone Number|";
	num = -1;
	if (contact.Contact::get_pn().length() > 10) {
		std::cout << contact.Contact::get_pn().substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.Contact::get_pn().length())
			std::cout << " ";
		std::cout << contact.Contact::get_pn();
	}
	std::cout << "|\nDarkest Secret|";
	num = -1;
	if (contact.Contact::get_ds().length() > 10) {
		std::cout << contact.Contact::get_ds().substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.Contact::get_ds().length())
			std::cout << " ";
		std::cout << contact.Contact::get_ds();
	}
	std::cout << "|\n";
}


static void	show_contacts(PhoneBook phonebook){
	std::string input;
	int number = 0;
	while (number < phonebook.PhoneBook::get_number())
	{
		display_contact(phonebook.PhoneBook::get_contact(number), number);
		number++;
	}
	std::getline (std::cin, input);
	number = -1;
	while (input[++number]){
		if (!isdigit(input[number])){
			std::cout << "Not a number\n";
			return ;
		}
	}
	if (!input[0] || std::stoi(input) > phonebook.PhoneBook::get_number() || std::stoi(input) <= 0){
		std::cout << "Not in the list\n";
		return ;
	}
	single_contact(phonebook.PhoneBook::get_contact((int) std::stoi(input) - 1));
}

int main(void) {
	PhoneBook phonebook;
	std::string command;
	phonebook.PhoneBook::init_number();
	while (1)
	{
		std::cout << "MENU:\n";
		std::getline (std::cin,command);
		if (command == "EXIT")
		{
			std::cout << "Exiting the program\n";
			return (0);
		}
		else if (command == "ADD")
			add_contact(&phonebook);
		else if (command == "SEARCH")
			show_contacts(phonebook);
	}
};