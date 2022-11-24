
#include "FragTrap.hpp"

int main(void) {

	FragTrap fragtrap1;
	FragTrap fragtrap2("fragTrap2");
	FragTrap fragtrap3(fragtrap2);

	fragtrap1.attack("fragTrap2");
	fragtrap2.takeDamage(5);
	fragtrap3.beRepaired(1);
	fragtrap2.takeDamage(6);
	fragtrap2.beRepaired(1);
	fragtrap2.attack("fragTrap1");

	fragtrap1.highFivesGuys();

	for (int i = 0; i < 10; i++)
		fragtrap1.attack("fragTrap2");
	
	fragtrap1.takeDamage(500);
	fragtrap1.beRepaired(50);

	return (0);
}