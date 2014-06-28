#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdlib>

bool isEven(int i) {
	return !(i % 2);
}

int main() {
	std::vector<int> v;

	for(int i = 0; i < 20; i++)
		v.push_back(i);

	for(auto itr = v.begin(); itr != v.end(); itr++)
		std::cout << *itr << " ";
	std::cout << std::endl;

	int count = std::count_if(v.begin(), v.end(), isEven);
	std::cout << count << " numbers are evenly divisible by 2." << std::endl;
}

