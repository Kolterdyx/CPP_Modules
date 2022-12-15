
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int main(void) {

	int amount = 10;
	Animal *animals[amount];

	std::cout << "\nArray created -------------------------\n" << std::endl;

	for (int i=0; i < amount / 2; i++)
	{
		animals[i] = new Cat();
	}

	std::cout << "\nCats created  -------------------------\n" << std::endl;

	for (int i=amount / 2; i < amount; i++)
	{
		animals[i] = new Dog();
	}

	std::cout << "\nDogs created  -------------------------\n" << std::endl;

	for (int i=0; i < amount; i++)
	{
		std::cout << animals[i]->getType() << std::endl;
		animals[i]->makeSound();
		delete animals[i];
	}

	std::cout << "\nTesting copies ------------------------\n" << std::endl;

	Cat *cat = new Cat();

	Cat *cat2 = new Cat(*cat);

	delete cat;
	delete cat2;

	return (0);
}