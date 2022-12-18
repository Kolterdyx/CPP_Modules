//
// Created by Ciro Garcia belmonte on 12/18/22.
//

#include "B.hpp"

B::~B() {
	std::cout << "\033[1;37mB destructor called\033[0m" << std::endl;
}

B::B() {
	std::cout << "\033[1;37mB default constructor called\033[0m" << std::endl;
}
