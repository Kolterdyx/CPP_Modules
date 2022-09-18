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

	void printField(char *field);

	void printList();

	Contact *getContact(int index);

	~PhoneBook();
};
