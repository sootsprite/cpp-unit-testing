#include <iostream>
#include <regex>

int main(int argc, char const* argv[]) {
	std::string input(R"(apple is delicious)");
	std::regex re("a.*s");
	std::smatch match;

	if(std::regex_match(input, match, re)) {
		for(auto&& i : match) {
			std::cout << typeid(i).name() << std::endl;
			std::cout << i.str() << std::endl;
		}
	}

	return 0;
}

