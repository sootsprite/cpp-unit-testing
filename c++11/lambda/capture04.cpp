#include <iostream>
#include <algorithm>

int main() {
	int target = 5;
	int count;

	// target‚æ‚è¬‚³‚¢—v‘f‚ÌŒÂ”‚ğ”‚¦‚é
	auto count_less = [&, target](int x) {
		if(x < target)
			++count;
	};

	int data[] = { 1, 3, 5, 7, 2, 4, 6, 8 };
	count = 0;
	std::for_each(std::begin(data), std::end(data), count_less);
	std::cout << target << "‚æ‚è¬‚³‚È”‚ª " << count << "ŒÂ‚ ‚è‚Ü‚·" << std::endl;
}

