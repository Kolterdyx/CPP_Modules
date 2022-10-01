//
// Created by kolterdyx on 2/10/22.
//

#include "HumanA.hpp"


HumanA::HumanA(std::string name, Weapon *weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void HumanA::attack()
{
	std::cout << this->name << " attacks with their weapon " << this->weapon->getType() << std::endl;
}

void HumanA::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}