#include <iostream>
#include <limits>

int main(int argc, char const* argv[]) {
	bool f = std::numeric_limits<float>::is_iec559;
	bool d = std::numeric_limits<double>::is_iec559;

	std::cout.setf(std::ios::boolalpha);
	std::cout << "about float : " << f << std::endl;
	std::cout << "about double: " << d << std::endl;

	return 0;
}
