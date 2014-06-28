#include <iostream>

int main(int argc, char const* argv[]) {
	int n = 32;
	auto print_capture = [&n]() { std::cout << n++ << " is captured" << std::endl; };

	print_capture();
	print_capture();
	print_capture();
	print_capture();
	std::cout << "n = " << n << std::endl;

	n = 64;
	print_capture();
	std::cout << "n = " << n << std::endl;
	return 0;
}

