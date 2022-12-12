
#include "Cat.hpp"
#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"


int main(void) {

	const Animal* meta = new Animal();
	const Animal* dog = new Dog();
	const Animal* cat = new Cat();
	const WrongAnimal* wrongMeta = new WrongAnimal();
	const WrongAnimal* wrongCat = new WrongCat();
	std::cout << "Type: " << cat->getType() << " " << std::endl;
	std::cout << "Type: " << dog->getType() << " " << std::endl;
	std::cout << "Type: " << meta->getType() << " " << std::endl;
	std::cout << "Type: " << wrongCat->getType() << " " << std::endl;
	std::cout << "Type: " << wrongMeta->getType() << " " << std::endl;
	meta->makeSound();
	cat->makeSound();
	dog->makeSound();

	wrongMeta->makeSound();
	wrongCat->makeSound();

	delete meta;
	delete dog;
	delete cat;
	delete wrongCat;
	delete wrongMeta;

	return (0);
}