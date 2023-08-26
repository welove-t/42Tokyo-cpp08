#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <vector>

#define RED		"\e[0;31m" // Red
#define GREEN	"\e[0;32m" // Green
#define YELLOW	"\e[0;33m" // Yellow
#define BLUE	"\e[0;34m" // Blue
#define RESET 	"\e[0m"    // Reset

class MutantStack
{
	private:

	public:
		MutantStack();
		MutantStack(unsigned int N);
		~MutantStack();

		MutantStack(const MutantStack& rhs);
		MutantStack& operator=(const MutantStack& rhs);

};


#endif
