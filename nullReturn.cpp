#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Object {
private:
	string str_;
public:
	Object(const char* str)
		:str_(str) {
	}
	const char* toString() const { return str_.c_str(); }
	friend ostream& operator<<(ostream& os, const Object& ob) { os << ob.toString();  return os; }
};

void ifZeroNull(int n, Object*& ob) {
	ostringstream oss;
	if(n == 0)
		ob = NULL;
	else {
		oss << n;
		*ob = Object(oss.str().c_str());
	}
	cout << "address: " << ob << endl;
}

int main() {
	Object a = "str";
	Object* pa;

	ifZeroNull(123456, pa);
	if(pa != NULL) {
		cout << "address: " << pa << endl;
		cout << a << endl;
	}
	else
		cout << "null" << endl;
}
