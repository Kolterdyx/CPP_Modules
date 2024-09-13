
#ifndef CPP_MODULES_EASYFIND_HPP
#define CPP_MODULES_EASYFIND_HPP

#include <iostream>
#include <sstream>


template <typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator it = container.begin();
	typename T::iterator ite = container.end();
	while (it != ite) {
		if (*it == value)
			return it;
		it++;
	}
	return ite;
}

#endif //CPP_MODULES_EASYFIND_HPP
