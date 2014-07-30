#include <iostream>
#include <vector>
#include <algorithm>

template <class InputIter>
void bogosort(InputIter first, InputIter last){
	while(!std::is_sorted(first, last))
		std::random_shuffle(first, last);
}

int main(int argc, char const* argv[]) {
	std::vector<int> v = { 1, 2, 3, 4 };

	bogosort(v.begin(), v.end());

	for(auto&& var : v)
		std::cout << var << std::endl;

	return 0;
}
