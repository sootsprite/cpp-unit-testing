#include <iostream>
#include <sstream>

using namespace std;

int main() {
	stringstream ss;
	double pi;

	ss << "2.7182818e3";
	ss >> pi;
	cout << pi << endl;
	cout << ss.str() << endl;

	// 文字列から数値に変換.
	ss << "3.14";
	ss >> pi;
	cout << ss.str() << endl;
	cout << showpoint << pi << endl;

	ss.clear(); // 状態をクリア.
	ss.str(""); // 文字列をクリア.

	// 数値から文字列に変換.
	ss << 123 << "NUMBER";
	cout << ss.str() << endl;

	return 0;
}
