#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "header.hpp"

class PhoneBook{
public:

	PhoneBook();

	~PhoneBook();

	int		number;
	Contact	contacts[8];
};

#endif
