//
// Created by Ciro Garcia belmonte on 12/12/22.
//

#ifndef CPP_MODULES_BRAIN_HPP
#define CPP_MODULES_BRAIN_HPP

#include <iostream>

#define USECOLOR

#ifdef USECOLOR
# define WHITE "\033[37m"
# define RESET     "\033[0m"
#else
# define WHITE ""
# define RESET ""
#endif

class Brain {

public:
	Brain();
	Brain(const Brain& other);
	Brain &operator=(const Brain& other);
	~Brain();

	std::string getIdea(int i) const;

private:
	std::string ideas[100];
};


#endif //CPP_MODULES_BRAIN_HPP
