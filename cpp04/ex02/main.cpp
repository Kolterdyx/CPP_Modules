
#include "Cat.hpp"
#include "Dog.hpp"
#include "Animal.hpp"


int main(void) {

	Cat cat;
	Dog dog;

	// Won't compile
	//Animal animal;

	cat.makeSound();
	dog.makeSound();

	//Even if it did compile, this wouldn't work anyways
	//animal.makeSound();

	return (0);
}