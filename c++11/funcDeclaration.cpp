#include <iostream>
#include <string>

using namespace std;

auto func() -> void {
	cout << "hello world" << endl;
}

auto func(const string& str) -> void {
	cout << str << endl;
}

int main() {
	func();
	func("argument type is std::string");
}
