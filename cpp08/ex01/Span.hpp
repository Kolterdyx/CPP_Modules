//
// Created by Ciro Garcia belmonte on 12/18/22.
//

#ifndef CPP_MODULES_SPAN_HPP
#define CPP_MODULES_SPAN_HPP

#include <iostream>
#include <vector>

class Span {

private:
	unsigned int _size;
	unsigned int _capacity;
	int *_array;

public:
	Span();
	Span(unsigned int n);
	Span(Span const &other);
	Span &operator=(Span const &other);
	~Span();

	void addNumber(int n);
	int shortestSpan();
	int longestSpan();

	void addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);

	class FullException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "container is full";
		}
	};

	class NoSpanException : public std::exception {
	public:
		virtual const char *what() const throw() {
			return "no span to find";
		}
	};
};

#endif //CPP_MODULES_SPAN_HPP
