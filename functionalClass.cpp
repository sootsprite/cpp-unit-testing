#include <iostream>
#include <functional>

using namespace std;

class Object {
private:
	string str_;
public:
	Object(const string& str) :str_(str) {  }
	Object(const char* str) :str_(str) {  }
	const char* toString() const { return str_.c_str(); }
	char individual(int index) const { return str_[index]; }
	bool operator<(const Object& ob) const { return str_ < ob.str_; }
	bool operator>(const Object& ob) const { return str_ > ob.str_; }
};

int main()
{
	try {
		greater<Object> func;

		Object a("apple");
		Object b("blue");

		cout << boolalpha << func(b, a) << endl;
	}
	catch(exception& e) {
		cerr << e.what() << endl;
	}
}
