#include <iostream>
#include <list>
#include <forward_list>
#include <algorithm>

int main(int argc, char const* argv[]) {
	// in case of list
	std::list<int> li;
	for(int i = 0; i < 10; ++i)
		li.push_back(i);
	for(auto&& i : li)
		std::cout << i << " ";
	std::cout << std::endl;

	// in case of forward_list
	std::forward_list<int> fl;
	auto itr = fl.before_begin();
	for(int i = 0; i < 10; ++i)
		itr = fl.insert_after(itr, i);
	for(auto&& i : fl)
		std::cout << i << " ";
	std::cout << std::endl;
	return 0;
}
