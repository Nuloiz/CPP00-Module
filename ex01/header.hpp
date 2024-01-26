#ifndef HEADER_HPP
# define HEADER_HPP

#include <iostream>
#include <string>

class Contact{
	public:

	//static void set_values(Phonebook *phonebook, char *fn, char *ln, char *nn, char *pn, char *ds);

	//private:
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	secret;
};

class PhoneBook{
	public:
		int		number;
		Contact	contacts[8];
};

int		main(void);
void	add_contact(PhoneBook *phonebook);

#endif