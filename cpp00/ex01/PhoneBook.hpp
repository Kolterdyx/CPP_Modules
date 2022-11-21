#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

# include "Contact.hpp"
# include <string>

class PhoneBook
{
  private:
	Contact *contacts[8];
	int count;

  public:
	PhoneBook();

	void add(Contact *contact);

	void printField(std::string field);

	void printList();

	Contact *getContact(int index);

	~PhoneBook();
};

#endif
