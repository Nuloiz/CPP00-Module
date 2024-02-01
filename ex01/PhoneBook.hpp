#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include <iostream>
#include <string>
#include "Contact.hpp"

class PhoneBook{
public:

	PhoneBook();

	~PhoneBook();

	int		number;
private:
	Contact	contacts[8];
};

#endif
