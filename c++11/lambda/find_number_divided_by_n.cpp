#include <iostream>
#include <algorithm>

int main(int argc, char const* argv[]) {
	int ary[] = { 9, 7, 5, 3, 1, -2, -4, -6, -8, 0 };
	int n = 4;

	auto itr = std::find_if(
		std::begin(ary),
		std::end(ary),
		[n](int m) { return !(m % n); }
	);

	if(itr != std::end(ary))
		std::cout << "find a number divided by " << n << ": " << *itr << std::endl;
}

