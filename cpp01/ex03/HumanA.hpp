//
// Created by kolterdyx on 2/10/22.
//

#ifndef CPP_MODULES_HUMANA_HPP
#define CPP_MODULES_HUMANA_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanA {
private:
	Weapon *weapon;
	std::string name;
public:

	HumanA(std::string name, Weapon *weapon);

	void attack();

	void setWeapon(Weapon *weapon);

};


#endif //CPP_MODULES_HUMANA_HPP
