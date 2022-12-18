
#ifndef CPP_MODULES_EASYFIND_HPP
#define CPP_MODULES_EASYFIND_HPP

#include <iostream>

template <typename T>
typename T::iterator easyfind(T &container, int value) {
	typename T::iterator it = container.begin();
	typename T::iterator ite = container.end();
	while (it != ite) {
		if (*it == value)
			return it;
		it++;
	}
	throw std::exception();
}

#endif //CPP_MODULES_EASYFIND_HPP
