//
// Created by kolterdyx on 2/10/22.
//

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
}

void HumanB::attack()
{
	std::cout << this->name << " attacks with their weapon " << this->weapon->getType() << std::endl;
}

void HumanB::setWeapon(Weapon *weapon)
{
	this->weapon = weapon;
}