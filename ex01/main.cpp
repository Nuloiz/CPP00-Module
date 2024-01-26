#include "header.hpp"

static void display_contact(Contact contact, int index){
	int num = -1;
	std::cout << "|        ";
	std::cout << index + 1;
	std::cout << "|";
	if (contact.first_name.length() > 10) {
		std::cout << contact.first_name.substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.first_name.length())
			std::cout << " ";
		std::cout << contact.first_name;
	}
	std::cout << "|";
	num = -1;
	if (contact.last_name.length() > 10) {
		std::cout << contact.last_name.substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.last_name.length())
			std::cout << " ";
		std::cout << contact.last_name;
	}
	std::cout << "|";
	num = -1;
	if (contact.nickname.length() > 10) {
		std::cout << contact.nickname.substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.nickname.length())
			std::cout << " ";
		std::cout << contact.nickname;
	}
	std::cout << "|\n";
}

static void	single_contact(Contact contact)
{
	int num = -1;
	std::cout << "    First Name|";
	if (contact.first_name.length() > 10) {
		std::cout << contact.first_name.substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.first_name.length())
			std::cout << " ";
		std::cout << contact.first_name;
	}
	std::cout << "|\n     Last Name|";
	num = -1;
	if (contact.last_name.length() > 10) {
		std::cout << contact.last_name.substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.last_name.length())
			std::cout << " ";
		std::cout << contact.last_name;
	}
	std::cout << "|\n      Nickname|";
	num = -1;
	if (contact.nickname.length() > 10) {
		std::cout << contact.nickname.substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.nickname.length())
			std::cout << " ";
		std::cout << contact.nickname;
	}
	std::cout << "|\n  Phone Number|";
	num = -1;
	if (contact.phone_number.length() > 10) {
		std::cout << contact.phone_number.substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.phone_number.length())
			std::cout << " ";
		std::cout << contact.phone_number;
	}
	std::cout << "|\nDarkest Secret|";
	num = -1;
	if (contact.secret.length() > 10) {
		std::cout << contact.secret.substr(0, 9);
		std::cout << ".";
	}
	else{
		while (++num < 10 - (int)contact.secret.length())
			std::cout << " ";
		std::cout << contact.secret;
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
		std::getline (std::cin,command);
		if (command == "EXIT")
			return (0);
		else if (command == "ADD")
			add_contact(&phonebook);
		else if (command == "SEARCH")
			show_contacts(phonebook);
	}
};