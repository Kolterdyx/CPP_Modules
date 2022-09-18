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

void PhoneBook::printField(std::string field)
{
	int spaces = 10 - (int)field.length();
	for (int x = 0; x < spaces; x++)
		std::cout << " ";
	if (spaces >= 0)
		std::cout << field;
	else {
		for (int x=0; x < 9; x++)
			std::cout << field[x];
		std::cout << ".";
	}
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
		this->printField(c->name);
		std::cout << "|";
		this->printField(c->last_name);
		std::cout << "|";
		this->printField(c->nick);
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
