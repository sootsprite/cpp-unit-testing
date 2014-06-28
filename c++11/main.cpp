#include <iostream>
#include <exception>
int main(int argc, char const* argv[]) {
	try {
		std::wcout.imbue(std::locale("ja"));
		std::wcout << L"あいう" << std::endl;
	}
	catch(std::exception& exc) {
		std::cerr << exc.what() << std::endl;
	}
}
