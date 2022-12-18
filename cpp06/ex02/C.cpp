//
// Created by Ciro Garcia belmonte on 12/18/22.
//

#include "C.hpp"

C::~C() {
	std::cout << "\033[1;37mC destructor called\033[0m" << std::endl;
}

C::C() {
	std::cout << "\033[1;37mC default constructor called\033[0m" << std::endl;
}
