#include <iostream>
#include <algorithm>

int main() {
	int target = 5;
	int count;

	// target��菬�����v�f�̌��𐔂���
	auto count_less = [&, target](int x) {
		if(x < target)
			++count;
	};

	int data[] = { 1, 3, 5, 7, 2, 4, 6, 8 };
	count = 0;
	std::for_each(std::begin(data), std::end(data), count_less);
	std::cout << target << "��菬���Ȑ��� " << count << "����܂�" << std::endl;
}

