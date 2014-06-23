#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const* argv[]) {
	string* data2[16] = { nullptr };

	data2[0] = new string("apple");

	for(int i=0; i<16; i++)
		if(data2[i] == nullptr)
			cout << "nullptr" << endl;
		else
			cout << *data2[i] << endl;

	for(int i=0; data2[i]; i++) {
		delete data2[i];
		cout << "delete: " << i << endl;
	}


	for(int i=0; i<16; i++)
		if(data2[i] == nullptr)
			cout << "nullptr" << endl;
		else
			cout << "not nullptr"<< endl;
}

