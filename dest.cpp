#include <iostream>
#include <ctime>

using namespace std;

class Demo {
public:
	Demo() { cout << "コンストラクタ" << endl; }
	~Demo() { cout << "デストラクタ" << endl; }
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
