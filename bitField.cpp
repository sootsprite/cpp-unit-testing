#include <iostream>
#include <vector>

typedef unsigned char byte;

using namespace std;

class Object {
private:
	byte a : 2;
	byte b : 2;
};
class Sample1 {
private:
	bool ary[9];
};

int main()
{
	vector<bool> array(2);
	cout << array.size() << endl;
	cout << sizeof(Object) << endl;
	cout << sizeof(Sample1) << endl;
}

