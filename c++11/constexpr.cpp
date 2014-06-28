#include <iostream>
#include <typeinfo>
#include <cstdlib>
#include <ctime>

using namespace std;

B
const int random() {
	return 5;
}

struct Apple { };

int main() {
	std::srand((unsigned int)std::time(NULL));
	int ary[random()];
	for(int i = 0; i < sizeof(ary) / sizeof(ary[0]); i++)
		std::cout << i << std::endl;
	cout << typeid(random()).name() << std::endl;
	cout << typeid(const int).name() << std::endl;
	cout << typeid(double).name() << std::endl;
	cout << typeid(Apple).name() << std::endl;
}

