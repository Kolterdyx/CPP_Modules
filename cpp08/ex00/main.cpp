
#include "easyfind.hpp"
#include <vector>

int main() {
	std::vector<int> v;
	for (int i = 0; i < 10; i++) {
		v.push_back(i);
	}
	std::cout << "easyfind(v, 1): " << (v.end() != easyfind(v, 1) ? "found": "not found") << "\n";
	std::cout << "easyfind(v, 3): " << (v.end() != easyfind(v, 3) ? "found": "not found") << "\n";
	std::cout << "easyfind(v, 5): " << (v.end() != easyfind(v, 5) ? "found": "not found") << "\n";
	std::cout << "easyfind(v, 11): " << (v.end() != easyfind(v, 11) ? "found": "not found") << "\n";
	
}
