//
// Created by Ciro Garcia belmonte on 3/20/23.
//

#ifndef CPP_MODULES_RPN_HPP
#define CPP_MODULES_RPN_HPP

#include <queue>

typedef struct operation {
	int v;
	char op;
} operation;

class RPN {
private:
	std::queue<operation> operations;

public:
	RPN();
	explicit RPN(const std::string &expression);
	~RPN();

	float calculate();
};


#endif //CPP_MODULES_RPN_HPP
