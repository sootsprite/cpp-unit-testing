#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

int main() {
	std::vector<bool> v;

	for(int i = 0; i < 10; i++)
		v.push_back(std::rand() % 2);

	for(auto itr = v.begin(); itr != v.end(); itr++)
		std::cout << std::boolalpha << *itr << " ";
	std::cout << std::endl;

	int count = std::count(v.begin(), v.end(), true);
	std::cout << count << " elements are true." << std::endl;
}

