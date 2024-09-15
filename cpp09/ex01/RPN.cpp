//
// Created by Ciro Garcia Belmonte on 3/20/23.
//

#include <iostream>
#include "RPN.hpp"

#include <stack>

RPN::RPN() {

}

RPN::RPN(const std::string &expression)
{
	std::stack<float> stack;
	for (size_t i = 0; i < expression.size(); i++) {
		if (expression[i] == ' ')
			continue;
		if (expression[i] >= '0' && expression[i] <= '9') {
			stack.push(static_cast<float>(expression[i] - '0'));
			while (expression[i] >= '0' && expression[i] <= '9')
				i++;
		} else if (expression[i] == '+' || expression[i] == '-' || expression[i] == '*' || expression[i] == '/') {
			if (stack.size() < 2) {
				throw std::invalid_argument("Error");
			}
			const float b = stack.top();
			stack.pop();
			const float a = stack.top();
			stack.pop();
			switch (expression[i]) {
				case '+':
					stack.push(a + b);
					break;
				case '-':
					stack.push(a - b);
					break;
				case '*':
					stack.push(a * b);
					break;
				case '/':
					stack.push(a / b);
					break;
				default:
					throw std::invalid_argument("Error");
			}
		} else {
			throw std::invalid_argument("Error");
		}
	}

	if (stack.size() != 1) {
		throw std::invalid_argument("Error");
	}
	std::cout << stack.top() << std::endl;
}

RPN::~RPN() {

}
