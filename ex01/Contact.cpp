#include "Contact.hpp"

Contact::Contact (){
	return;
}

Contact::~Contact (){
	return;
}

void Contact::set_values(std::string fn, std::string ln, std::string nn, std::string pn, std::string ds) {
	first_name = fn;
	last_name = ln;
	nickname = nn;
	phone_number = pn;
	secret = ds;
}

std::string Contact::get_fn() const{
	return (first_name);
}

std::string Contact::get_ln() const{
	return (last_name);
}

std::string Contact::get_nn() const{
	return (nickname);
}

std::string Contact::get_pn() const{
	return (phone_number);
}

std::string Contact::get_ds() const{
	return (secret);
}

