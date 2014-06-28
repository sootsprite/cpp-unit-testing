#include <iostream>
#include <vector>

int main(int argc, char const* argv[]) {
	try {
		std::vector<int> v = { 1, 2, 3, 4 };
		auto a = std::next(v.begin(), 2);
		auto b = std::prev(v.end());
		// auto c = std::advance(v.begin(), 2);
		auto&& ref = v.begin();
		ref++;
		std::cout << *a << std::endl;
		std::cout << *b << std::endl;
		std::cout << *ref << std::endl;
		std::cout << *v.begin() << std::endl;
	}
	catch(...) {
		std::cerr << "exception" << std::endl;
	}

	return 0;
}
