
#include <iostream>
#include <stdint.h>
#include <cstdlib>
#include <cstdio>
#include <valarray>
#include "Harl.hpp"

int main(void)
{
	Harl harl;
	harl.complain("DEBUG");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("ERROR");
}
