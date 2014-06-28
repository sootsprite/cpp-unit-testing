#include <iostream>
#include <regex>

/**
 * typedef memo
 * ------------------------------
 *  typedef match_results<const char*>              cmatch;
 *  typedef match_results<const wchar_t*>          wcmatch;
 *  typedef match_results<string::const_iterator>   smatch;
 *  typedef match_results<wstring::const_iterator> wsmatch;
 */

int main(int argc, char const* argv[]) {
	std::locale::global(std::locale(""));

	const wchar_t* input = L"あじのもとのあみのさん";
	std::wregex re(L"(あ.*)の(.*ん)");
	std::wcmatch match;

	if(std::regex_match(input, match, re)) {
		std::wcout << L"マッチしました" << std::endl;
		// auto equals std::sub_match<Iter>
		for(auto&& i : match) {
			std::wcout
				<< "content: " << i.str() << std::endl
				<< "position: " << std::distance(input, i.first) << std::endl
				<< "length: " << i.length() << std::endl;
		}
	}
	return 0;
}

