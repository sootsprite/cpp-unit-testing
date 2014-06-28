#include <iostream>
#include <string>
#include <regex>

using namespace std;

int main(int argc, char const* argv[]) {
	string str("this subject has a submarine as a subsequence");
	regex reg("\\b(sub)([^ ]*)");   // subで始まる単語を探せ
	cout << "入力文字列" << str << endl;
	cout << "正規表現:" << "\\b(sub)([^ ]*)" << endl;
	// default constructor = end-of-sequence:
	regex_token_iterator<string::iterator> rend;

	cout << "完全一致:";
	regex_token_iterator<string::iterator> a ( str.begin(), str.end(), reg );
	while(a != rend)
		cout << " [" << *a++ << "]";
	cout << endl;

	cout << "のうち、subを抜いて出力する:";
	regex_token_iterator<string::iterator> b ( str.begin(), str.end(), reg, 2 );
	while(b != rend)
		cout << " [" << *b++ << "]";
	cout << endl;

	cout << "sub とそうでないの分けて表示:";
	int submatches[] = { 1, 2 };
	regex_token_iterator<string::iterator> c ( str.begin(), str.end(), reg, submatches );
	while(c != rend)
		cout << " [" << *c++ << "]";
	cout << endl;

	cout << "subじゃないやつの表示:";
	regex_token_iterator<string::iterator> d ( str.begin(), str.end(), reg, -1 );
	while(d != rend)
		cout << " [" << *d++ << "]";
	cout << endl;

	return 0;
}

