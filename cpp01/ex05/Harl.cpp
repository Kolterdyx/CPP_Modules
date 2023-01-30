#include "Harl.hpp"

// Canonical member functions with descriptive messages printed to std::cout.
// The text will be colored white.

Harl::Harl() {
	std::cout << "\033[1;37mHarl default constructor called\033[0m" << std::endl;
	levels[0] = "DEBUG";
	levels[1] = "INFO";
	levels[2] = "WARNING";
	levels[3] = "ERROR";

	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
}

Harl::Harl(Harl const &other) {
	std::cout << "\033[1;37mHarl copy constructor called\033[0m" << std::endl;
	*this = other;
}

Harl &Harl::operator=(Harl const &other) {
	std::cout << "\033[1;37mHarl assignment operator called\033[0m" << std::endl;
	if (this != &other) {
		// do stuff
	}
	return (*this);
}

Harl::~Harl() {
	std::cout << "\033[1;37mHarl destructor called\033[0m" << std::endl;
}

void Harl::debug(void) const {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl;
}

void Harl::info(void) const {
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void) const {
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void) const {
	std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}

void Harl::complain(std::string message) {
	for (int i=0; i < 4; i++) {
		if (message == levels[i]) {
			(this->*functions[i])();
		}
	}
}