#include <iostream>

/*
 * キャプチャは、ラムダ式が定義された時点で行われます
 */
int main(int argc, char const* argv[]) {
	int n = 32;
	auto print_capture = [n]() { std::cout << n << " is captured" << std::endl; };

	// n = 64;
	print_capture();
	return 0;
}

