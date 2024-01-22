#ifndef EX01_H
# define EX01_H

#include <iostream>

class Contact{
public:
	char	*name;
};

class PhoneBook{
	public:
		int		number;
		Contact	*contacts;
};

#endif