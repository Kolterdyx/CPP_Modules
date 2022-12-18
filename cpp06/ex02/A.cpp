//
// Created by Ciro Garcia belmonte on 12/18/22.
//

#include "A.hpp"

A::~A() {
	std::cout << "\033[1;37mA destructor called\033[0m" << std::endl;
}

A::A() {
	std::cout << "\033[1;37mA default constructor called\033[0m" << std::endl;
}
