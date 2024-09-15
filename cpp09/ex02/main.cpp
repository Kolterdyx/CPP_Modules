
#include <iostream>
#include <vector>
#include <deque>
#include "PmergeMe.hpp"
#include <ctime>
#include <sys/time.h>




int main(int argc, char **argv) {

	if (argc == 1) {
		std::cout << "Usage: " << argv[0] << " <number> [number] [number] ..." << std::endl;
		return 1;
	}

	timespec start = {};
	timespec end = {};

	std::vector<int> elementsVector;
	std::deque<int> elementsDeque;
	for (int i = 1; i < argc; i++) {
		int n;
		try {
			n = stringto<int>(argv[i]);
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


	clock_gettime(CLOCK_REALTIME, &start);
	sort(elementsVector);
	clock_gettime(CLOCK_REALTIME, &end);
	double elapsed = ((end.tv_sec - start.tv_sec) * 1000000.) + ((end.tv_nsec - start.tv_nsec) / 1000.);
	std::cout << "Time to sort " << to_string(argc - 1) << " elements with \"std::vector\": " << elapsed << " us" << std::endl;

	clock_gettime(CLOCK_REALTIME, &start);
	sort(elementsDeque);
	clock_gettime(CLOCK_REALTIME, &end);
	elapsed = ((end.tv_sec - start.tv_sec) * 1000000.) + ((end.tv_nsec - start.tv_nsec) / 1000.);
	std::cout << "Time to sort " << to_string(argc - 1) << " elements with \"std::deque\": " << elapsed << " us" << std::endl;

}