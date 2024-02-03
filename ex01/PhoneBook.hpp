#pragma once
#include "Contact.hpp"
#include "header.hpp"

class Contact;

class PhoneBook{
public:

	PhoneBook();

	~PhoneBook();

	int		number;
	Contact	contacts[8];
};
