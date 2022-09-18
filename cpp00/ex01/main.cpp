#include "Contact.hpp"
#include "PhoneBook.hpp"
#include <iostream>
#include <stdlib.h>

int	main(void)
{
	char		prompt[1000];
	PhoneBook	*book;

	book = new PhoneBook();
	while (1)
	{
		std::cout << "PhoneBook> ";
		std::cin >> prompt;
		if (!strncmp("EXIT", prompt, 4))
			break ;
		else if (!strncmp("SEARCH", prompt, 7))
		{
			book->printList();
			Contact *c;
			int index;
			do {
				std::cout << "Index: ";
				std::cin >> prompt;
				index = atoi(prompt);
				c = book->getContact(index);
			} while (c == NULL && index != -1);
			if (index == -1)
				continue;
			c->print();
		}
		else if (!strncmp("ADD", prompt, 3))
			book->add(new Contact());
	}
	delete book;
}
