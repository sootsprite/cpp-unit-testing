/**
 * Check the difference between those below
 *   const int* p;  // 参照先が定数  ポインタは可変
 *   int* const p;  // ポインタが定数  参照先は可変
 *
 * Constant declarations
 *   const int
 *   int const
 * are both valid and both equivalent.
 */
#include <iostream>

int main(int argc, char const* argv[]) {
	int a = 3;
	int b = 5;
	int const* p = &a;
	// p = &b;
	*p = 10;
	std::cout << *p << std::endl;
	return 0;
}

