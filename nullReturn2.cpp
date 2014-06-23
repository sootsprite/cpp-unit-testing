#include <iostream>
#include <string>
using namespace std;

class Object {
private:
	string str_;
public:
	Object(const string& str) :str_(str) {  }
	Object(const char* str) :str_(str) {  }
	const char* toString() { return str_.c_str(); }
	char individual(int index) { return str_[index]; }
};

Object* isNull(const string& str)
{
	static Object value = "initial";
	if(str == "null")
		return NULL;
	else {
		value = str;
		return &value;
	}
}

int main()
{
	Object* ptr = isNull("apple");
	if(ptr == NULL)
		cout << "null" << endl;
	else
		cout << ptr->toString() << endl;
}
