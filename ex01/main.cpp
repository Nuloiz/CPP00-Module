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


static void	show_contacts(PhoneBook phonebook){
	std::string input;
	int number = 0;
	while (number < phonebook.number)
	{
		display_contact(phonebook.contacts[number], number);
		number++;
	}
}

int main(void) {
	PhoneBook phonebook;
	std::string command;
	phonebook.number = 8;
	std::getline (std::cin, phonebook.contacts[0].first_name);
	std::getline (std::cin, phonebook.contacts[0].last_name);
	std::getline (std::cin, phonebook.contacts[0].nickname);
	while (1)
	{
		std::getline (std::cin,command);
		if (std::strcmp(command.c_str(), "EXIT") == 0)
			return (0);
		//else if (std::strcmp(command.c_str(), "ADD") == 0)
			//add_contact(&phonebook);
		else if (std::strcmp(command.c_str(), "SEARCH") == 0)
			show_contacts(phonebook);
	}
};