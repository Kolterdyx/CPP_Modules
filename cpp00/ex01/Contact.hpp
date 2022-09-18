#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
public:
	std::string name;
	std::string last_name;
	std::string nick;
	std::string phone_number;
	std::string darkest_secret;

	Contact();

	void print();
};

#endif
