#include <iostream>
#include <list>
#include <algorithm>
#include <functional>

int main() {
	std::list<int> l;

	for(int i = 0; i < 10; i++)
		l.push_back(i);

	for(auto itr = l.begin(); itr != l.end(); itr++)
		std::cout << *itr << " ";
	std::cout << std::endl;

	std::transform(l.begin(), l.end(), l.begin(), std::negate<int>());

	for(auto itr = l.begin(); itr != l.end(); itr++)
		std::cout << *itr << " ";
	std::cout << std::endl;
}

