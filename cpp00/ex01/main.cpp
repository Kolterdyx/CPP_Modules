#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string	get_prompt(std::string str)
{
	std::string line;
	bool not_the_first_loop = false;
	do {
		line.clear();
		std::cin.clear();
		std::clearerr(stdin);
		if (not_the_first_loop)
			std::cout << RED << "Invalid command" << RESET << std::endl;
		std::cout << GREEN << str << RESET;
		std::getline(std::cin, line);
		not_the_first_loop = true;
	} while (line.size() == 0);
	return line;
}

int	main(void)
{
	std::string	prompt;
	PhoneBook	*book;

	book = new PhoneBook();
	while (1)
	{
		prompt = get_prompt("PhoneBook: ");
		if (!prompt.compare("EXIT"))
			break ;
		else if (!prompt.compare("SEARCH"))
		{
			book->printList();
			Contact *c;
			int index;
			do {
				prompt = get_prompt("Index: ");
				try {
					index = std::stoi(prompt);
				} catch (std::exception &e) {
					index = -1;
				}
				c = book->getContact(index);
			} while (c == NULL && index != -1);
			if (index == -1) {
				std::cout << RED << "Invalid index" << RESET << std::endl;
				continue;
			}
			c->print();
		}
		else if (!prompt.compare("ADD"))
			book->add(new Contact());
		else
			std::cout << RED << "Invalid command" << RESET << std::endl;
	}
	delete book;
}
