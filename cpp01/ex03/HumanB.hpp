//
// Created by kolterdyx on 2/10/22.
//

#ifndef CPP_MODULES_HUMANB_HPP
#define CPP_MODULES_HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB {

private:
	Weapon *weapon;
	std::string name;

public:

	HumanB(std::string name);

	void attack();

	void setWeapon(Weapon *weapon);
};


#endif //CPP_MODULES_HUMANB_HPP
