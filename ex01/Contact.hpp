#pragma once
#include "header.hpp"

class Contact{

	private:
	std::string	first_name;
	std::string	last_name;
	std::string	nickname;
	std::string	phone_number;
	std::string	secret;

	public:

	Contact();

	void set_values(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds);

	~Contact();

	std::string get_fn() const;
	std::string get_ln() const;
	std::string get_nn() const;
	std::string get_pn() const;
	std::string get_ds() const;
};
