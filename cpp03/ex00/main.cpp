
#include "ClapTrap.hpp"

int main(void) {

	ClapTrap claptrap1;
	ClapTrap claptrap2("ClapTrap2");
	ClapTrap claptrap3(claptrap2);

	claptrap1.attack("ClapTrap2");
	claptrap2.takeDamage(5);
	claptrap3.beRepaired(1);
	claptrap2.takeDamage(6);
	claptrap2.beRepaired(1);
	claptrap2.attack("ClapTrap1");
	for (int i = 0; i < 10; i++)
		claptrap1.attack("ClapTrap2");

	return (0);
}