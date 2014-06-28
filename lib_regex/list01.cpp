#include <iostream>
#include <regex>

int main(int argc, char const* argv[]) {
	try {
		std::regex re("[aA.*z");
	}
	catch (const std::regex_error& e) {
		std::cout << e.code() << ": " << e.what() << std::endl;
	}

	return 0;
}

