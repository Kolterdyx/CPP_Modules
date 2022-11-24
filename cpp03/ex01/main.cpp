
#include "ScavTrap.hpp"

int main(void) {

	ScavTrap scavtrap1;
	ScavTrap scavtrap2("ScavTrap2");
	ScavTrap scavtrap3(scavtrap2);

	scavtrap1.attack("ScavTrap2");
	scavtrap2.takeDamage(5);
	scavtrap3.beRepaired(1);
	scavtrap2.takeDamage(6);
	scavtrap2.beRepaired(1);
	scavtrap2.attack("ScavTrap1");
	for (int i = 0; i < 50; i++)
		scavtrap1.attack("ScavTrap1");
	
	scavtrap1.guardGate();
	scavtrap2.takeDamage(500);
	scavtrap2.beRepaired(50);

	return (0);
}