
#include "iter.hpp"


int main() {
	int tab[] = {0, 1, 2, 3, 4};
	std::string tab2[] = {"a", "b", "c", "d", "e"};
	::iter(tab, 5, print);
	::iter(tab2, 5, print);
	return 0;
}
