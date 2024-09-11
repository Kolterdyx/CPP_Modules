//
// Created by Ciro Garcia belmonte on 12/18/22.
//

#ifndef CPP_MODULES_ARRAY_HPP
#define CPP_MODULES_ARRAY_HPP

#include <iostream>

template <typename T>
class Array {
private:
	T *_array;
	unsigned int _size;
	unsigned int _capacity;

public:
	Array();
	Array(unsigned int n);
	Array(Array const &other);
	Array &operator=(Array const &other);
	~Array();

	T &operator[](unsigned int i);

	unsigned int size() const;

	class OutOfBoundsException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "index out of bounds";
		}
	};
};

#include "Array.tpp"

#endif //CPP_MODULES_ARRAY_HPP
