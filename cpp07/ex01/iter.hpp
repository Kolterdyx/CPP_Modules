
#ifndef CPP_MODULES_ITER_HPP
#define CPP_MODULES_ITER_HPP

#include <iostream>

template <typename T>
void iter(T *array, size_t length, void (*f)(T const &)) {
	for (size_t i = 0; i < length; i++) {
		f(array[i]);
	}
}


template <typename T>
void print(T const &i) {
	std::cout << i << std::endl;
}

#endif //CPP_MODULES_ITER_HPP
