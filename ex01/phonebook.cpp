#include "header.hpp"

static void	move_contacts(int num, PhoneBook *phonebook){
	phonebook->contacts[num].first_name = phonebook->contacts[num + 1].first_name;
	phonebook->contacts[num].first_name = phonebook->contacts[num + 1].last_name;
	phonebook->contacts[num].first_name = phonebook->contacts[num + 1].nickname;
	phonebook->contacts[num].first_name = phonebook->contacts[num + 1].phone_number;
	phonebook->contacts[num].first_name = phonebook->contacts[num + 1].secret;
}

void	add_contact(PhoneBook *phonebook){
	int num	= 0;
	std::string input;
	if (phonebook->number == 8){
		while (num < 7){
			move_contacts(num, phonebook);
			num++;
		}
		(phonebook->number)--;
	}
	std::cout << "First Name:";
	std::getline (std::cin, phonebook->contacts[phonebook->number].first_name);
	std::cout << "Last Name:";
	std::getline (std::cin, phonebook->contacts[phonebook->number].last_name);
	std::cout << "Nickname:";
	std::getline (std::cin, phonebook->contacts[phonebook->number].nickname);
	std::cout << "Phone-Number:";
	std::getline (std::cin, phonebook->contacts[phonebook->number].phone_number);
	std::cout << "Darkest Secret:";
	std::getline (std::cin, phonebook->contacts[phonebook->number].secret);
	(phonebook->number)++;
}