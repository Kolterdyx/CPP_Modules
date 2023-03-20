//
// Created by Ciro Garcia belmonte on 3/20/23.
//

#include <string>
#include <iostream>
#include "RPN.hpp"

RPN::RPN() {

}

RPN::RPN(const std::string &expression)
{
	// We can interpret the start of the expression "n m op" as "(0) n + m op"
	// This makes it easier to parse the expression, as we can store the first number
	// as "n +" and then parse the rest of the expression as "m op"

	int i = 0;
	// find the first number
	while (expression[i] == ' ')
		i++;
	if (expression[i] < '0' || expression[i] > '9')
		throw std::invalid_argument("Invalid expression");
	operation op;
	op.v = expression[i] - '0';
	op.op = '+';
	operations.push(op);
	i++;
	// Parse the rest of the expression
	while (i < (int)expression.length()) {
		// Skip spaces
		while (expression[i] == ' ')
			i++;
		// Check if we reached the end of the expression
		if (i == (int)expression.length())
			break;
		// We should have a number now
		if (expression[i] < '0' || expression[i] > '9')
			throw std::invalid_argument("Invalid number");
		// Parse the number
		op.v = expression[i] - '0';
		// Skip the number
		i++;
		// Skip spaces
		while (expression[i] == ' ')
			i++;
		// Check if we reached the end of the expression
		if (i == (int)expression.length())
			throw std::invalid_argument("Invalid expression");
		// We should have an operator now
		if (expression[i] != '+' && expression[i] != '-' && expression[i] != '*' && expression[i] != '/')
			throw std::invalid_argument("Invalid operator (" + std::string(1, expression[i]) + ")");
		// Parse the operator
		op.op = expression[i];
		// Skip the operator
		i++;
		// Push the operation
		operations.push(op);
	}
}

RPN::~RPN() {

}

float RPN::calculate() {
	float result = 0;
	operation op;
	while (!operations.empty()) {
		op = operations.front();
		operations.pop();
		switch (op.op) {
			case '+':
				result += (float)op.v;
				break;
			case '-':
				result -= (float)op.v;
				break;
			case '*':
				result *= (float)op.v;
				break;
			case '/':
				result /= (float)op.v;
				break;
		}
	}

	return result;
}
