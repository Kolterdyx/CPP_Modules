#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>

class Harl {

private:

	std::string levels[4];
	void (Harl::*functions[4])(void) const;

	void debug(void) const;
	void info(void) const;
	void warning(void) const;
	void error(void) const;

public:
	Harl();
	Harl(Harl const &other);
	Harl &operator=(Harl const &other);
	~Harl();

	void complain(std::string level);
};


#endif //HARL_HPP
