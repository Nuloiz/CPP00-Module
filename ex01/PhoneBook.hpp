#pragma once
#include "Contact.hpp"
#include "header.hpp"

class Contact;

class PhoneBook{
public:

	PhoneBook();

	~PhoneBook();

	void set_contact(int num, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);
	void set_number(int i);
	void init_number();

	Contact get_contact(int number) const;
	int 	get_number() const;

private:
	int		number;
	Contact	contacts[8];
};
