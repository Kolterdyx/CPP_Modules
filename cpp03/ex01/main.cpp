
#include "ScavTrap.hpp"

int main(void) {

	ScavTrap claptrap1;
	ScavTrap claptrap2("ScavTrap2");
	ScavTrap claptrap3(claptrap2);

	claptrap1.attack("ScavTrap2");
	claptrap2.takeDamage(5);
	claptrap3.beRepaired(1);
	claptrap2.takeDamage(6);
	claptrap2.beRepaired(1);
	claptrap2.attack("ScavTrap1");
	for (int i = 0; i < 50; i++)
		claptrap1.attack("ScavTrap1");
	
	claptrap1.guardGate();
	claptrap2.takeDamage(500);
	claptrap2.beRepaired(50);

	return (0);
}