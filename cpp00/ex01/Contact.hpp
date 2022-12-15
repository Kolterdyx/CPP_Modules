#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <string>
#include <iostream>

#define RESET              "\033[0m"
#define BLACK              "\033[30m"      /* Black */
#define RED                "\033[31m"      /* Red */
#define GREEN              "\033[32m"      /* Green */
#define YELLOW             "\033[33m"      /* Yellow */
#define BLUE               "\033[34m"      /* Blue */
#define MAGENTA            "\033[35m"      /* Magenta */
#define CYAN               "\033[36m"      /* Cyan */
#define WHITE              "\033[37m"      /* White */
#define BOLDBLACK   "\033[1m\033[30m"      /* Bold Black */
#define BOLDRED     "\033[1m\033[31m"      /* Bold Red */
#define BOLDGREEN   "\033[1m\033[32m"      /* Bold Green */
#define BOLDYELLOW  "\033[1m\033[33m"      /* Bold Yellow */
#define BOLDBLUE    "\033[1m\033[34m"      /* Bold Blue */
#define BOLDMAGENTA "\033[1m\033[35m"      /* Bold Magenta */
#define BOLDCYAN    "\033[1m\033[36m"      /* Bold Cyan */
#define BOLDWHITE   "\033[1m\033[37m"      /* Bold White */

std::string	get_prompt(std::string str);

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
