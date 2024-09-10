//
// Created by Ciro Garcia belmonte on 12/18/22.
//

#include "Base.hpp"
#include <iostream>

Base::~Base() {
	std::cout << "\033[1;37mBase destructor called\033[0m" << std::endl;
}
