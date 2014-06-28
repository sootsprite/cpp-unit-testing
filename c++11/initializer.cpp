#include <iostream>

class Rectangle {
private:
	int width_;
	int height_;
public:
	Rectangle(int width, int height) : width_(width), height_(height) {
	}
	Rectangle() : Rectangle(0, 0) {
	}

	void print() {
		for(int i = 0; i < height_; i++) {
			for(int i = 0; i < width_; i++)
				std::cout << "*";
			std::cout << std::endl;
		}
	}
};

int main(int argc, char const* argv[]) {
	Rectangle r1;
	Rectangle r2(10, 2);

	r1.print();
	r2.print();
	return 0;
}
