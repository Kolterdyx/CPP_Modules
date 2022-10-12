#include "Zombie.h"

int	main(void)
{
	Zombie	*horde;

	std::cout << "Horde of 1" << std::endl;
	horde = zombieHorde(1, "Zombie Horde 1");
	for (int i = 0; i < 1; i++)
		horde[i].announce();
	delete[] horde;

	std::cout << "Horde of 3" << std::endl;
	horde = zombieHorde(3, "Zombie Horde 2");
	for (int i = 0; i < 3; i++)
		horde[i].announce();
	delete[] horde;

	std::cout << "Horde of 10" << std::endl;
	horde = zombieHorde(10, "Zombie Horde 3");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete[] horde;
}
