#include <iostream>
#include <bitset>

using namespace std;

// TODO shift
int main() {
	bitset<10> bs(5);

	for(int i = 0; i < 32; i++) {
		cout << bs << endl;
		bs <<= 1;
	}
}
