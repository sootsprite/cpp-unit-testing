#include <iostream>
#include <list>

template<typename TList>
void showall(TList list) {
	for(auto itr = list.begin(); itr != list.end(); itr++)
		std::cout << *itr << " ";
	std::cout << std::endl;
}

int main() {
	std::list<char> list1, list2, list3;

	for(int i = 0; i < 10; i += 2)
		list1.push_back('A' + i);

	for(int i = 1; i < 11; i += 2)
		list2.push_back('A' + i);

	showall(list1);
	showall(list2);

	list1.merge(list2);
	if(list2.empty())
		std::cout << "list2 is now empty" << std::endl;

	showall(list1);

	char str[] = "-splicing-";
	for(int i = 0; str[i]; i++)
		list3.push_back(str[i]);

	showall(list3);

	for(auto itr = list1.begin(); itr != list1.end(); itr++)
		if(*itr == 'F')
			list1.splice(itr, list3);

	showall(list1);
}

