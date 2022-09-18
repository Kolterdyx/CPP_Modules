#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

class Contact
{
public:
	char name[1000];
	char last_name[1000];
	char nick[1000];
	char phone_number[1000];
	char darkest_secret[1000];

	Contact();

	void print();
};

#endif
