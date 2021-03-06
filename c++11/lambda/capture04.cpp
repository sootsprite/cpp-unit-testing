#include <iostream>
#include <algorithm>

int main() {
	int target = 5;
	int count;

	// targetより小さい要素の個数を数える
	auto count_less = [&, target](int x) {
		if(x < target)
			++count;
	};

	int data[] = { 1, 3, 5, 7, 2, 4, 6, 8 };
	count = 0;
	std::for_each(std::begin(data), std::end(data), count_less);
	std::cout << target << "より小さな数が " << count << "個あります" << std::endl;
}

