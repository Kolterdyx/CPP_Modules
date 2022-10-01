//
// Created by kolterdyx on 2/10/22.
//

#include "Weapon.hpp"

Weapon::Weapon(std::string type)
{
	this->type = type;
}

std::string Weapon::getType() {
	return (const std::string)this->type;
}

void Weapon::setType(std::string type) {
	this->type = type;
}