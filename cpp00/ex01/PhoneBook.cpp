#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "PhoneBook.hpp"
#include <iostream>

PhoneBook::PhoneBook()
{
	this->count = 0;
	for (int i = 0; i < 8; i++)
		this->contacts[i] = NULL;
}

void PhoneBook::add(Contact *contact) {
	if (count == 8)
	{
		delete contacts[0];
		for (int i = 1; i < 8; i++)
			contacts[i - 1] = contacts[i];
		contacts[7] = contact;
		return;
	}
	this->contacts[count] = contact;
	count++;
}

void PhoneBook::printList()
{
	std::cout << "     Index|      Name| Last Name|  Nickname" << std::endl;
	for (int i = 0; i < 8 && contacts[i] != NULL; i++)
	{
		Contact *c = contacts[i];
		for (int x = 0; x < 9; x++)
			std::cout << " ";
		std::cout << i;
		std::cout << "|";
		for (int x = 0; x < (10 - (int)strlen(c->name)); x++)
			std::cout << " ";
		for (int x = 0; x < 10 && x < (int)strlen(c->name); x++)
			std::cout << c->name[x];
		std::cout << "|";
		for (int x = 0; x < (10 - (int)strlen(c->last_name)); x++)
			std::cout << " ";
		for (int x = 0; x < 10 && x < (int)strlen(c->last_name); x++)
			std::cout << c->last_name[x];
		std::cout << "|";
		for (int x = 0; x < (10 - (int)strlen(c->nick)); x++)
			std::cout << " ";
		for (int x = 0; x < 10 && x < (int)strlen(c->nick); x++)
			std::cout << c->nick[x];
		std::cout << "\n";
	}
}

Contact *PhoneBook::getContact(int index) {
	return this->contacts[index];
}

PhoneBook::~PhoneBook() {
	for (int i = 0; i < 8; i++)
		delete this->contacts[i];
}

#endif
