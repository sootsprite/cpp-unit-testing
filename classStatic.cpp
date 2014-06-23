#include <iostream>
#include <string>

using namespace std;

class Object {
private:
	string a_;
public:
	Object() :a_("no args") {  }
	Object(const char* str) :a_(str) {  }
	string last(int num) {
		static int n;
		cout << "static int n in function:" << endl;
		cout << n << endl;
		cout << "argument num:" << endl;
		cout << num << endl;
		if(n == num) {
			return "�Ō�̂Ɠ���";
		}
		else {
			n = num;
			return "�Ō�̂ƈقȂ�";
		}
	}
};

int main() {
	Object ob[2] = { Object(), Object() };

	cout << ob[0].last(63) << endl;
	cout << ob[0].last(63) << endl;
	cout << ob[1].last(0) << endl;
	cout << ob[1].last(0) << endl;
}
