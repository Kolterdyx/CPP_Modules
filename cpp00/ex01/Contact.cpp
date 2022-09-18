#include "Contact.hpp"

Contact::Contact()
{
	do {
		std::cout << "First Name: ";
		std::getline(std::cin, this->name);
	} while (this->name.empty());
	do {
		std::cout << "Last Name: ";
		std::getline(std::cin, this->last_name);
	} while (this->last_name.empty());
	do {
		std::cout << "Nickname: ";
		std::getline(std::cin, this->nick);
	} while (this->nick.empty());
	do {
		std::cout << "Phone Number: ";
		std::getline(std::cin, this->phone_number);
	} while (this->phone_number.empty());
	do {
		std::cout << "Darkest Secret: ";
		std::getline(std::cin, this->darkest_secret);
	} while (this->darkest_secret.empty());
}

void Contact::print() {
	std::cout << "Name:           ";
	std::cout << this->name << std::endl;
	std::cout << "Last Name:      ";
	std::cout << this->last_name << std::endl;
	std::cout << "Nickname:       ";
	std::cout << this->nick << std::endl;
	std::cout << "Phone Number:   ";
	std::cout << this->phone_number << std::endl;
	std::cout << "Darkest Secret: ";
	std::cout << this->darkest_secret << std::endl;
}
