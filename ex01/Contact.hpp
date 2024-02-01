#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact{
public:

	//static void set_values(Contact *contacts, char *fn, char *ln, char *nn, char *pn, char *ds);
	//void set_values(char *fn, char *ln, char *nn, char *pn, char *ds);

	//private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;
};


#endif