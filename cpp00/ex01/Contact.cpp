#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "First Name: ";
	std::cin >> this->name;
	std::cout << "Last Name: ";
	std::cin >> this->last_name;
	std::cout << "Nickname: ";
	std::cin >> this->nick;
	std::cout << "Phone Number: ";
	std::cin >> this->phone_number;
	std::cout << "Darkest Secret: ";
	std::cin >> this->darkest_secret;
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
