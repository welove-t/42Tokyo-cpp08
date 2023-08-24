#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>
#include <set>
#include <deque>

template <typename T>
void	test(T& container)
{
	try
	{
		for (int i = 4; i <= 6; i++)
		{
			std::cout << "Search Value: " << i << " -> "<< std::flush;
			typename T::iterator it = easyfind(container, i);
			std::cout <<  "Found Value: " << GREEN <<  *it << RESET <<  std::endl;
		}
	}
	catch (const std::runtime_error& e)
	{
		std::cout << RED <<  e.what() << RESET <<  std::endl;
	}
}

int main() {

	int myArray[] = {1, 2, 3, 4, 5};

	std::cout << BLUE << "[ Vector ]" << RESET << std::endl;
	std::vector<int> myVector(myArray, myArray + sizeof(myArray) / sizeof(int));
	test(myVector);

	std::cout << BLUE << "[ List ]" << RESET << std::endl;
	std::list<int> myList(myArray, myArray + sizeof(myArray) / sizeof(int));
	test(myList);

	std::cout << BLUE << "[ Set ]" << RESET << std::endl;
	std::set<int> mySet(myArray, myArray + sizeof(myArray) / sizeof(int));
	test(mySet);

	std::cout << BLUE << "[ Deque ]" << RESET << std::endl;
	std::deque<int> myDeque(myArray, myArray + sizeof(myArray) / sizeof(int));
	test(myDeque);

	std::cout << BLUE << "\n[ Leaks Check ]" << RESET << std::endl;
	return 0;
}


__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
