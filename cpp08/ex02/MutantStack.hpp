//
// Created by Ciro Garcia belmonte on 12/18/22.
//

#ifndef CPP_MODULES_MUTANTSTACK_HPP
#define CPP_MODULES_MUTANTSTACK_HPP

#include <stack>

template<typename T>
class MutantStack : public std::stack<T> {
public:
	MutantStack() : std::stack<T>() {}
	MutantStack(MutantStack const &other) : std::stack<T>(other) {}
	MutantStack &operator=(MutantStack const &other) {
		std::stack<T>::operator=(other);
		return *this;
	}
	~MutantStack() {}

	typedef typename std::stack<T>::container_type::iterator iterator;
	typedef typename std::stack<T>::container_type::const_iterator const_iterator;
	typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
	typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

	iterator begin() {
		return std::stack<T>::c.begin();
	}

	iterator end() {
		return std::stack<T>::c.end();
	}

	const_iterator begin() const {
		return std::stack<T>::c.begin();
	}

	const_iterator end() const {
		return std::stack<T>::c.end();
	}

	reverse_iterator rbegin() {
		return std::stack<T>::c.rbegin();
	}

	reverse_iterator rend() {
		return std::stack<T>::c.rend();
	}

	const_reverse_iterator rbegin() const {
		return std::stack<T>::c.rbegin();
	}

	const_reverse_iterator rend() const {
		return std::stack<T>::c.rend();
	}


};


#endif //CPP_MODULES_MUTANTSTACK_HPP
