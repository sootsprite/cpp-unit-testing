#include <iostream>
#include <string>
#include <functional>

int main(int argc, char const* argv[]) {
	auto println = [](const std::string& str) { std::cout << str << std::endl; };
	std::function<std::string(const std::string&)> polite = [](const std::string& name) {
		return name + "����";
	};

	std::string message(polite("���Y"));
	println(message);
	println(polite("�����ɂ�"));
	return 0;
}
