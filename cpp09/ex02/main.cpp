
#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include "PmergeMe.hpp"


/**
 * @brief Sorts a T using the PmergeMe algorithm
 * @tparam T Must be a T that supports push_back, size, and operator[]
 * @param elements Elements to sort
 * @return sorted elements
 */
template<typename T>
T sort(T elements) {
	PmergeMe<T> pmergeMe(elements);

	return pmergeMe.sort();
}


int main(int argc, char **argv) {

	if (argc == 1) {
		std::cout << "Usage: " << argv[0] << " <number> [number] [number] ..." << std::endl;
		return 1;
	}

	std::chrono::high_resolution_clock::time_point start;
	std::chrono::high_resolution_clock::time_point end;

	std::vector<int> elementsVector;
	std::deque<int> elementsDeque;
	for (int i = 1; i < argc; i++) {
		int n;
		try {
			n = std::stoi(argv[i]);
			if (n < 0) {
				std::cout << "Number cant be negative: " << argv[i] << std::endl;
				return 1;
			}
		} catch (std::invalid_argument &e) {
			std::cout << "Invalid argument: " << argv[i] << std::endl;
			return 1;
		}
		elementsVector.push_back(n);
		elementsDeque.push_back(n);
	}


	std::cout << "Before: ";
	for (size_t i = 0; i < elementsVector.size(); i++) {
		std::cout << elementsVector[i] << " ";
	}

	std::vector<int> sorted = sort(elementsVector);

	std::cout << "\nAfter:  ";
	for (size_t i = 0; i < sorted.size(); i++) {
		std::cout << sorted[i] << " ";
	}
	std::cout << std::endl;

	start = std::chrono::high_resolution_clock::now();
	sort(elementsVector);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "Time to sort " << std::to_string(argc - 1) << " elements with \"std::vector\": " << (double)std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() / 1000. << " us" << std::endl;


	start = std::chrono::high_resolution_clock::now();
	sort(elementsDeque);
	end = std::chrono::high_resolution_clock::now();
	std::cout << "Time to sort " << std::to_string(argc - 1) << " elements with \"std::deque\": " << (double)std::chrono::duration_cast<std::chrono::nanoseconds>(end - start).count() / 1000. << " us" << std::endl;

}