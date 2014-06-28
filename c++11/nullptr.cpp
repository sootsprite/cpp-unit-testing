#include <iostream>
#include <string>

void func(int a) {
	std::cout
		<< R"!(Type of argument is (int))!" << std::endl
		<< "Value: " << a << std::endl;
}

void func(std::string* p) {
	std::cout << R"(Type of argument is (string*))" << std::endl;
	std::cout << "Value: " << (void*)p << std::endl;
}

int main() {
	func(NULL);
	func(nullptr);

	// ”äŠr‚µ‚Ä‚Ý‚é
	std::cout << std::boolalpha << (NULL == nullptr) << std::endl;
}

