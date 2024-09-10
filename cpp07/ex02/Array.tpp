//
// Created by Ciro Garcia belmonte on 12/18/22.
//

#ifndef CPP_MODULES_ARRAY_TPP
#define CPP_MODULES_ARRAY_TPP

#include "Array.hpp"

template<typename T>
Array<T>::Array() {

	_array = new T[0];
	_size = 0;
}

template<typename T>
Array<T>::Array(unsigned int n) {
	_array = new T[n];
	_size = n;
}

template<typename T>
Array<T>::Array(const Array &other) {
	*this = other;
}

template<typename T>
Array<T> &Array<T>::operator=(const Array &other) {
	if (this != &other) {
		_size = other._size;
		if (_array) {
			delete[] _array;
		}
		_array = new T[_size];
		for (unsigned int i = 0; i < _size; i++) {
			_array[i] = T(other._array[i]);
		}
	}
	return *this;
}

template<typename T>
Array<T>::~Array() {
	delete[] _array;
}

template<typename T>
T &Array<T>::operator[](unsigned int i) {
	if (i >= _size) {
		throw OutOfBoundsException();
	}
	return _array[i];
}

template<typename T>
unsigned int Array<T>::size() const {
	return _size;
}

#endif //CPP_MODULES_ARRAY_TPP
