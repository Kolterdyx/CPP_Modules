#include "Zombie.h"

Zombie::Zombie(std::string name)
{
	this->name = name;
}

void Zombie::announce(void)
{
	std::cout << this->name;
	std::cout << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
