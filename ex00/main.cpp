#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <list>

template <typename T>
void	test(T& container)
{
	container.push_back(1);
	container.push_back(2);
	container.push_back(3);
	container.push_back(4);
	container.push_back(5);

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

	std::cout << BLUE << "[ Vector Test ]" << RESET << std::endl;
	std::vector<int> myVector;
	test(myVector);

	std::cout << BLUE << "[ List Test ]" << RESET << std::endl;
	std::list<int> myList;
	test(myList);

	return 0;
}


__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
