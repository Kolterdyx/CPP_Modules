
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"


int main(void) {

	const WrongAnimal* meta = new WrongAnimal();
	const Animal* j = new Dog();
	const WrongAnimal* i = new WrongCat();
	std::cout << "Type: " << j->getType() << " " << std::endl;
	std::cout << "Type: " << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();


	delete meta;
	delete j;
	delete i;

	return (0);
}