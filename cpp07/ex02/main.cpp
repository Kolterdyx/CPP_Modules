
#include <cstdlib>

#include "Array.hpp"
#include <iostream>
#include <sstream>

#define MAX_VAL 750

#define SSTR( x ) static_cast< std::ostringstream & >( ( std::ostringstream() << std::dec << x ) ).str()


void more_tests() {
	Array<int> intR;

	Array<int> intRR(5);
	intR = intRR;
	std::cout << "intR[i]: ";
	for (size_t i = 0; i < intR.size(); i++)
	{
		intR[i] = i;
		std::cout << intR[i] << " ";
	}
	std::cout << std::endl;
	std::cout << "intRR[i]: ";
	for (size_t i = 0; i < intRR.size(); i++)
	{
		std::cout << intRR[i] << " ";
	}
	std::cout << std::endl;

	Array<float> floatR(25);
	std::cout << "floatR[i]: ";
	for (size_t i = 0; i < floatR.size(); i++)
	{
		std::cout << floatR[i] << "f ";
	}
	std::cout << std::endl;

	Array<std::string> stringR(5);
	std::cout << "stringR[i]: ";
	for (size_t i = 0; i < stringR.size(); i++)
	{
		stringR[i] = ( std::stringstream() << std::dec << i ).str();
		std::cout << stringR[i] << "s ";
	}
	std::cout << std::endl;

	Array<std::string> stringRR = stringR;
	for (size_t i = 0; i < 5; i++)
		stringRR[i] = "42";
	for (size_t i = 0; i < stringR.size(); i++)
		std::cout << stringR[i] << "s <> " << stringRR[i] << std::endl;

	std::cout << "---" << std::endl;

	try
	{
		intRR[-1] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		intRR[999] = 2;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}

int main() {
	Array<int> numbers(MAX_VAL);
	int *mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++) {
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++) {
		if (mirror[i] != numbers[i]) {
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	std::cout << "mirror test passed\n";

	try {
		numbers[-2] = 0;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
		std::cout << "Negative index test passed\n";
	}
	try {
		numbers[MAX_VAL] = 0;
	}
	catch (const std::exception &e) {
		std::cerr << e.what() << '\n';
		std::cout << "MAX_VAL index test passed\n";
	}

	delete[] mirror;

	more_tests();

	return 0;
}
