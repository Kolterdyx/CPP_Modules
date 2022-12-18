//
// Created by Ciro Garcia belmonte on 12/18/22.
//

#include "Span.hpp"
#include <algorithm>

Span::Span() {
	_array = new int[0];
}

Span::Span(unsigned int n) : _size(0) {
	_capacity = n;
	_array = new int[n];
}

Span::Span(Span const &span) {
	*this = span;
}

Span &Span::operator=(Span const &span) {
	if (this != &span) {
		_size = span._size;
		_capacity = span._capacity;
		_array = span._array;
	}
	return *this;
}

Span::~Span() {
	delete[] _array;
}

void Span::addNumber(int n) {
	if (_size == _capacity)
		throw FullException();
	_array[_size] = n;
	_size++;
}

int Span::shortestSpan() {
	if (_size < 2)
		throw NoSpanException();
	int *sorted = new int[_size];
	for (size_t i = 0; i < _size; i++)
		sorted[i] = _array[i];
	std::sort(sorted, sorted + _size);
	int min = sorted[1] - sorted[0];
	return min;
}

int Span::longestSpan() {
	if (_size < 2)
		throw NoSpanException();
	int min = *std::min_element(_array, _array + _size);
	int max = *std::max_element(_array, _array + _size);
	return max - min;
}

void Span::addNumber(std::vector<int>::iterator begin,
					 std::vector<int>::iterator end) {
	if (end - begin > _capacity - _size)
		throw FullException();
	for (std::vector<int>::iterator it = begin; it != end; it++) {
		_array[_size] = *it;
		_size++;
	}
}

