
#include <iostream>
#include "Span.hpp"
#include <cstdlib>

int main() {
	srand(time(NULL));

	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << "shortest: " << sp.shortestSpan() << std::endl;
	std::cout << "longest: " << sp.longestSpan() << std::endl;

	Span sp2 = Span(50000);
	for (int i = 0; i < 50000; i++)
		sp2.addNumber(rand() % 100);
	std::cout << "shortest: " << sp2.shortestSpan() << std::endl;
	std::cout << "longest: " << sp2.longestSpan() << std::endl;

	// Test with range of iterators
	std::vector<int> v;
	for (int i = 0; i < 50000; i++)
		v.push_back(rand() % 100);
	Span sp3 = Span(50000);
	sp3.addNumber(v.begin(), v.end());
	std::cout << "shortest: " << sp3.shortestSpan() << std::endl;
	std::cout << "longest: " << sp3.longestSpan() << std::endl;


	return 0;
}
