#include "Zombie.h"


void randomChump(std::string name)
{
	Zombie *zombert = newZombie(name);
	zombert->announce();
	delete zombert;
}