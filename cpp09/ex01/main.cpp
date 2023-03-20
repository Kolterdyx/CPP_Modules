
#include <iostream>
#include "RPN.hpp"


int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "Usage: ./RPN <expr>" << std::endl;
		return 1;
	}

	RPN rpn;

	try {
		rpn = RPN(argv[1]);
	} catch (std::invalid_argument &e) {
		std::cout << e.what() << std::endl;
		return 1;
	}
	float result = rpn.calculate();
	std::cout << result << std::endl;
}