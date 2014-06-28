#include <iostream>
#include <regex>

/**
 * typedef memo
 * ------------------------------
 *  typedef basic_regex<char>    regex;
 *  typedef basic_regex<wchar_t> wregex;
 */

int strlen(const wchar_t* str);

int main(int argc, char const* argv[]) {
	std::locale::global(std::locale(""));
	// std::wcout.imbue(std::locale(""));

	const wchar_t* input = L"あじのもとのあみのさん";
	std::wregex re(L"あ.*ん");

	std::wcout << strlen(input) << std::endl;

	if(std::regex_match(input, re)) {
		std::wcout << L"マッチしました" << std::endl;
	}

	return 0;
}

int strlen(const wchar_t* str) {
	int count = 0;
	for(int i = 0; str[i]; i++)
		count++;
	return count;
}

