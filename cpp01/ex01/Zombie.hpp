
#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include "Zombie.h"

class Zombie {

public:
	std::string name;

	Zombie(std::string name);
	Zombie();

	void announce(void);

	~Zombie();

};

#endif