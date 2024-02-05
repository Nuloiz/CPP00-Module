#include "Contact.hpp"
#include "PhoneBook.hpp"

PhoneBook::PhoneBook (){
	return;
}

PhoneBook::~PhoneBook (){
	return;
}

void 	PhoneBook::set_contact(int num, std::string fn, std::string ln, std::string nn, std::string pn, std::string ds){
	contacts[num].set_values(fn, ln, nn, pn, ds);
}

void	PhoneBook::set_number(int i) {
	number = number + i;
}

void	PhoneBook::init_number(){
	number = 0;
}
int	PhoneBook::get_number() const{
	return (number);
}

Contact	PhoneBook::get_contact(int num) const{
	return (contacts[num]);
}

