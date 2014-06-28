#include <iostream>
#include <vector>
#include <algorithm>

template<typename T>
class numbers {
private:
	std::vector<T> data;
	void print_one(const T& x) const {
		std::cout << x << " ";
	}

public:
	numbers() : data() {
	}

	void add(const T& x) {
		data.push_back(x);
	}

	void print_all() const {
		std::for_each(data.begin(), data.end(), [this](const T& x) { print_one(x); });
	}
};

int main(int argc, char const* argv[]) {
	numbers<int> ints;

	ints.add(1);
	ints.add(2);
	ints.add(3);

	ints.print_all();
	return 0;
}

