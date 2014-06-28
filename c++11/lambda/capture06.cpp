#include <iostream>
#include <stdexcept>
#include <exception>

/*
 * throw(exception-type-list)
 * ラムダ式内部で発生する例外を指定する。
 * それ以外の例外が発生した場合
 *   void unexpected();
 * を呼び出す。
 * これは，terminate()を呼び出してプログラムを異常終了させます。
 */
int main(int argc, char const* argv[]) {
	auto a = std::range_error("");
	auto divide = [](int a, int b) throw(int, std::exception) {
		if(b == 0)
			throw 0.0;
		return a / b;
	};

	try {
		std::cout << divide(1, 0) << std::endl;
	}
	catch(std::exception& e) {
		std::cerr << e.what() << std::endl;
	}
	catch(...) {
		std::cerr << "Exception that doesn't inherit is thrown." << std::endl;
	}
	return 0;
}

