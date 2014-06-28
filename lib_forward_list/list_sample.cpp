#include <iostream>
#include <list>
#include <string>
#include <algorithm>

int main(int argc, char const* argv[]) {
	std::list<std::string> cats = {
		"shutan", "mizuki", "rori",
	};

	auto itr = std::find(cats.begin(), cats.end(), "mizuki");
	itr = cats.insert(itr, "magusan");

	std::for_each(
		cats.begin(),
		cats.end(),
		[](std::string& s) { std::cout << s << " "; }
	);
	std::cout << std::endl;

	cats.erase(itr);
	std::for_each(
		cats.begin(),
		cats.end(),
		[](std::string& s) { std::cout << s << " "; }
	);
	std::cout << std::endl;
	return 0;
}
