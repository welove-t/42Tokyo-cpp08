#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <deque>
#include <list>

#define RED		"\e[0;31m" // Red
#define GREEN	"\e[0;32m" // Green
#define YELLOW	"\e[0;33m" // Yellow
#define BLUE	"\e[0;34m" // Blue
#define RESET 	"\e[0m"    // Reset

template <typename T, typename Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {
public:
	typedef typename Container::iterator iterator;

	MutantStack() : std::stack<T, Container>() {}
	MutantStack(const MutantStack& rhs) : std::stack<T, Container>(rhs) {}
	~MutantStack() {}

	MutantStack& operator=(const MutantStack& rhs) {
		std::stack<T, Container>::operator=(rhs);
		return *this;
	}

	iterator begin() {
		return this->c.begin();
	}

	iterator end() {
		return this->c.end();
	}
};


#endif
