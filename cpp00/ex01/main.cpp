#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	std::string	prompt;
	PhoneBook	*book;

	book = new PhoneBook();
	while (1)
	{
		std::cout << "PhoneBook> ";
		std::getline(std::cin, prompt);
		if (!prompt.compare("EXIT"))
			break ;
		else if (!prompt.compare("SEARCH"))
		{
			book->printList();
			Contact *c;
			int index;
			do {
				std::cout << "Index: ";
				std::getline(std::cin, prompt);
				index = std::stoi(prompt);
				c = book->getContact(index);
			} while (c == NULL && index != -1);
			if (index == -1)
				continue;
			c->print();
		}
		else if (!prompt.compare("ADD"))
			book->add(new Contact());
	}
	delete book;
}
