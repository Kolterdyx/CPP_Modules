//
// Created by kolterdyx on 2/10/22.
//

#ifndef CPP_MODULES_WEAPON_HPP
#define CPP_MODULES_WEAPON_HPP

#include <iostream>

class Weapon {

private:
	std::string type;

public:
	Weapon(std::string type);

	std::string getType();

	void setType(std::string type);
};


#endif //CPP_MODULES_WEAPON_HPP
