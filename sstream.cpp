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

	// �����񂩂琔�l�ɕϊ�.
	ss << "3.14";
	ss >> pi;
	cout << ss.str() << endl;
	cout << showpoint << pi << endl;

	ss.clear(); // ��Ԃ��N���A.
	ss.str(""); // ��������N���A.

	// ���l���當����ɕϊ�.
	ss << 123 << "NUMBER";
	cout << ss.str() << endl;

	return 0;
}
