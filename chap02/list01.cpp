#include <iostream>
#include <vector>

int main() {
	std::vector<int> v(10);

	std::cout << "Size: " << v.size() << std::endl;

	for(int i = 0; i < 10; i++)
		v[i] = i;


	std::cout << "Current content:" << std::endl;
	for(int i = 0; i < v.size(); i++)
		std::cout << v.at(i) << " ";
	std::cout << std::endl;

	for(int i = 0; i < 10; i++)
		v.push_back(i + 10);

	std::cout << "Current content:" << std::endl;
	for(int i = 0; i < v.size(); i++)
		std::cout << v.at(i) << " ";
}
