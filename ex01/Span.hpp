#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>

#define RED		"\e[0;31m" // Red
#define GREEN	"\e[0;32m" // Green
#define YELLOW	"\e[0;33m" // Yellow
#define BLUE	"\e[0;34m" // Blue
#define RESET 	"\e[0m"    // Reset

class Span
{
	private:
		std::vector<int>	_vec;
		unsigned int		_maxSize;
	public:
		Span();
		Span(unsigned int N);
		~Span();

		Span(const Span& rhs);
		Span& operator=(const Span& rhs);

		void	addNumber(int num);
		int		shortestSpan();
		int		longestSpan();

};


#endif
