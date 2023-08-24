#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

int main() {
	// Using easyfind with std::vector
	std::vector<int> myVector;
	myVector.push_back(1);
	myVector.push_back(2);
	myVector.push_back(3);
	myVector.push_back(4);
	myVector.push_back(5);

	try{
		std::vector<int>::iterator it = easyfind(myVector, 2);
		std::cout << "Found value: " << *it << std::endl;
	} catch (const std::runtime_error& e) {
		std::cout << e.what() << std::endl;
	}

	// Using easyfind with std::list
	std::list<int> myList;
	myList.push_back(40);
	myList.push_back(50);
	myList.push_back(60);

	try {
		std::list<int>::iterator it = easyfind(myList, 50);
		std::cout << "Found value: " << *it << std::endl;
	} catch (const std::runtime_error& e) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}


__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
