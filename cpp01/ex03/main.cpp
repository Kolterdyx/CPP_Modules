//
// Created by kolterdyx on 2/10/22.
//

#include "HumanA.hpp"
#include "HumanB.hpp"
#include "Weapon.hpp"

int main()
{
	{
		Weapon *club = new Weapon("crude spiked club");

		HumanA *bob = new HumanA("Bob", club);
		bob->attack();
		club->setType("some other type of club");
		bob->attack();

		delete club;
		delete bob;
	}
	{
		Weapon *club = new Weapon("crude spiked club");
		HumanB *jim = new HumanB("Jim");
		jim->setWeapon(club);
		jim->attack();
		club->setType("some other type of club");
		jim->attack();

		delete club;
		delete jim;
	}

	return 0;
}


