#include <iostream>
#include <string>

using namespace std;

class Object {
private:
	string serial_;
public:
	Object()
		:serial_("constractor not to have args") {  }
	Object(const string& serial)
		:serial_(serial) {  }
	const string& toString() const { return serial_; }
};

int main()
{
	int xsize = 4;
	int ysize = 3;
	Object*** data;
	data = new Object**[ysize];
	for(int i=0; i<ysize; i++) {
		data[i] = new Object*[xsize];
	}

	data[2][3] = new Object("apple");

	if(data[0][0] == NULL)
		cout << "null" << endl;
	//cout << data[0][0]->toString() << endl;
	cout << data[2][3]->toString() << endl;

	for(int i=0; i<ysize; i++) {
		delete[] data[i];
	}
	delete[] data;
}
