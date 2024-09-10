
#include <cstdlib>

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>


Base *generate() {
	int random = rand() % 3;
	switch (random){
		case 0:
			return new A;
		case 1:
			return new B;
		default:
			return new C;
	}
}



void identify(Base &p) {
	try {
		(void)dynamic_cast<A &>(p);
		std::cout << "A" << std::endl;
		return;
	} catch (std::exception &e) {}
	try {
		(void)dynamic_cast<B &>(p);
		std::cout << "B" << std::endl;
		return;
	} catch (std::exception &e) {}
	try {
		(void)dynamic_cast<C &>(p);
		std::cout << "C" << std::endl;
		return;
	} catch (std::exception &e) {}
	std::cout << "Unknown" << std::endl;
}

void identify(Base *p) {
	if (dynamic_cast<A *>(p)) {
		std::cout << "A" << std::endl;
		return;
	}
	if (dynamic_cast<B *>(p)) {
		std::cout << "B" << std::endl;
		return;
	}
	if (dynamic_cast<C *>(p)) {
		std::cout << "C" << std::endl;
		return;
	}
	std::cout << "Unknown" << std::endl;
}

int main() {
	srand(time(NULL));
	for (int i = 0; i < 10; i++) {
		Base *base = generate();
		std::cout << "From pointer: ";
		identify(base);
		std::cout << "From reference: ";
		identify(*base);
		delete base;
	}
	return 0;
}
