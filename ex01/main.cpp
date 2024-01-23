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