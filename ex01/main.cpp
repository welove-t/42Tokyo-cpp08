#include "Span.hpp"

int main() {
	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"              Single Set Test "	 		<< std::endl <<
	"------------------------------------------" <<
	RESET << std::endl;

	Span sp1 = Span(5);
	try
	{
		sp1.addNumber(6);
		sp1.addNumber(3);
		sp1.addNumber(17);
		sp1.addNumber(9);
		sp1.addNumber(11);
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout << sp1.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"              Multi Set Test "				<< std::endl <<
	"------------------------------------------" <<
	RESET << std::endl;

	Span sp2 = Span(10002);
	try
	{
		sp2.addNumber(1);
		sp2.addNumber(2);
		sp2.addNumber(100, 10000);

		std::cout << sp2.shortestSpan() << std::endl;
		std::cout << sp2.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"          (Error) Over Size Test "		<< std::endl <<
	"------------------------------------------" <<
	RESET << std::endl;

	Span sp3 = Span(10002);
	try
	{
		sp3.addNumber(1);
		sp3.addNumber(2);
		sp3.addNumber(100, 10000);
		sp3.addNumber(1);

		std::cout << sp3.shortestSpan() << std::endl;
		std::cout << sp3.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"      (Error) Too Little Size Test "		<< std::endl <<
	"------------------------------------------" <<
	RESET << std::endl;

	Span sp4 = Span(2);
	try
	{
		sp4.addNumber(1);

		std::cout << sp4.shortestSpan() << std::endl;
		std::cout << sp4.longestSpan() << std::endl;
	}
	catch(std::exception& e)
	{
		std::cerr << RED << e.what() << RESET << std::endl;
	}

	std::cout << BLUE <<
	"------------------------------------------" << std::endl <<
	"                Leaks Check "				<< std::endl <<
	"------------------------------------------" <<
	RESET << std::endl;
	return 0;
}


__attribute((destructor))
static void destructor() {
	system("leaks -q main");
}
