#include <iostream>
#include <vector>
#include <functional>

double binary(double a, double b, std::function<double(double)> f) {
}

int main() {
	std::vector<std::vector<int>> vect;

	vect.push_back({ 1, 2, 3 });
	vect.push_back({ 1, 2, 3, 4, 5 });
	vect.push_back({ 1 });

	for(auto&& i : vect) {
		for (auto&& j : i) {
			std::cout << j << " ";
		}
		std::cout << std::endl;
	}
}
