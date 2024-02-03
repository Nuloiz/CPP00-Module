#include "header.hpp"

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
	while (number < phonebook.number)
	{
		display_contact(phonebook.contacts[number], number);
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
	if (!input[0] || std::stoi(input) > phonebook.number || std::stoi(input) <= 0){
		std::cout << "Not in the list\n";
		return ;
	}
	single_contact(phonebook.contacts[(int) std::stoi(input) - 1]);
}

int main(void) {
	PhoneBook phonebook;
	std::string command;
	phonebook.number = 0;
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