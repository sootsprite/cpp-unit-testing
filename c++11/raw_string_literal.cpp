#include <iostream>

int main() {
	const char32_t* str1 = UR"("a"b"c" \ \ \ \)";
	const char* str2 = R"!(print of () : ())!";
	const char* str3 = R"!(apple "a")!";

	std::cout << (char*)str1 << std::endl;
	std::cout << str2 << std::endl;
	std::cout << str3 << std::endl;
}
