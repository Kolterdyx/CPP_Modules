#include "Zombie.h"

Zombie::Zombie() {
	this->name = "";
}

Zombie::Zombie(std::string name)
{
	char n[name.length()];
	name.copy(n, name.length());
	this->name = n;
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie()
{
}