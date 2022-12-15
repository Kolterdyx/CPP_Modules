#include "Contact.hpp"

Contact::Contact()
{
	this->name = get_prompt(std::string(CYAN) + "First Name: ");
	this->last_name = get_prompt(std::string(CYAN) + "Last Name: ");
	this->nick = get_prompt(std::string(CYAN) + "Nickname: ");
	this->phone_number = get_prompt(std::string(CYAN) + "Phone Number: ");
	this->darkest_secret = get_prompt(std::string(CYAN) + "Darkest Secret: ");
}

void Contact::print() {
	std::cout << BOLDWHITE << "Name:           " << RESET;
	std::cout << CYAN << this->name << RESET << std::endl;
	std::cout << BOLDWHITE << "Last Name:      " << RESET;
	std::cout << CYAN << this->last_name << RESET << std::endl;
	std::cout << BOLDWHITE << "Nickname:       " << RESET;
	std::cout << CYAN << this->nick << RESET << std::endl;
	std::cout << BOLDWHITE << "Phone Number:   " << RESET;
	std::cout << CYAN << this->phone_number << RESET << std::endl;
	std::cout << BOLDWHITE << "Darkest Secret: " << RESET;
	std::cout << CYAN << this->darkest_secret << RESET << std::endl;
}
