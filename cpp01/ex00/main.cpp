#include "Zombie.h"

int	main(void)
{
	// Test "Zombie *newZombie(std::string name)"
	Zombie *zombert = newZombie("Test Zombie 1");
	zombert->announce();
	delete zombert;

	// Test "void randomChump(std::string name)"
	randomChump("Test Zombie 2");
}
