#include "Zombie.h"

Zombie	*zombieHorde(int N, std::string name)
{
	Zombie *horde = new Zombie[N];
	static Zombie zero;
	for (int i = 0; i < N; i++)
	{
		char n[name.length()];
		name.copy(n, name.length());
		horde[i].name = n;
	}
	return (horde);
}
