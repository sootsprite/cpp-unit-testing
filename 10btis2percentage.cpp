#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	int value;
	while(cin >> value) {
		cout << "((1023 - " << setw(4) << value << ") *  100) >> 10 : " << (((1023 - value) * 100) >> 10) << endl;
		cout << "((1023 - " << setw(4) << value << ") / 1023) * 100 : " << (int)((1023 - value) / 1023. * 100) << endl;
	}
}

