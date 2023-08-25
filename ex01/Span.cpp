#include "Span.hpp"

/* Orthodox Canonical Form */
Span::Span()
{
	std::cout << "(Span) Default Constructor called" << std::endl;
}

Span::Span(unsigned int N) :_maxSize(N)
{
	std::cout << "(Span) Constructor called" << std::endl;
}

Span::Span(const Span& rhs) :_vec(rhs._vec), _maxSize(rhs._maxSize)
{
	std::cout << "(Span) Copy Constructor called"  << std::endl;
}

Span::~Span()
{
	std::cout << "(Span) Destructor called" << std::endl;
}

Span& Span::operator=(const Span& rhs)
{
	std::cout << "(Span) Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return *this;
	_vec = rhs._vec;
	_maxSize = rhs._maxSize;
	return *this;
}

/* Function */
void	Span::addNumber(int num)
{
	if (_vec.size() >= _maxSize )
		throw std::runtime_error("Cannot be added to span");
	_vec.push_back(num);
}
