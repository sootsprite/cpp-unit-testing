#include <iostream>
#include <cstring>

using namespace std;

int main()
{
	unsigned int data;
	unsigned char array[4];
	while(cin >> data) {
		memmove(array, &data, 4);
		for(int i=0; i<4; i++) {
			for(int j=0; j<8; j++)
				if(((int)array[i] & (1 << 7 - j)) == 0)
					cout << 0;
				else
					cout << 1;
			cout << endl;
		}
		unsigned int decode = 0;
		for(int i=0; i<4; i++)
			decode += (int)array[i] << i*8;
		cout << "decode: " << decode << endl;
	}
}
