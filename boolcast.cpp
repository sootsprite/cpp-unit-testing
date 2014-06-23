#include <iostream>
#include <vector>

int main(int argc, char const* argv[])  {
	std::vector<int> v = { 1, 2, 3, 4, 5, -1, 0 };

	std::cout.setf(std::ios::boolalpha);
	for (auto&& var : v) {
		std::cout << static_cast<bool>(var) << std::endl;
	}

	return 0;
}
