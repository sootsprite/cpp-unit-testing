#include <iostream>
#include <algorithm>

int main(int argc, char const* argv[]) {
	int ary[] = { 9, 7, 5, 3, 1, -2, -4, -6, -8, 0 };

	std::sort(
		std::begin(ary),
		std::end(ary),
		[](int a, int b) { return std::abs(a) < std::abs(b); }
	);

	for(auto&& i : ary)
		std::cout << i << " ";
	std::cout << std::endl;
}

