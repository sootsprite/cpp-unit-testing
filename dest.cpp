#include <iostream>
#include <ctime>

using namespace std;

class Demo {
public:
	Demo() { cout << "�R���X�g���N�^" << endl; }
	~Demo() { cout << "�f�X�g���N�^" << endl; }
	void clear()
	{
		cout << "now loading..." << endl;
		long t0 = clock();
		while(clock() - t0 < 2000);
		(*this) = Demo();
	}
};

int main()
{
	Demo a;
	a.clear();
	a.clear();
	a.clear();
}
