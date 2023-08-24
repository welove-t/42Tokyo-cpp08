#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm> // for std::find
#include <stdexcept> // for std::runtime_error

#define RED		"\e[0;31m" // Red
#define GREEN	"\e[0;32m" // Green
#define YELLOW	"\e[0;33m" // Yellow
#define BLUE	"\e[0;34m" // Blue
#define RESET 	"\e[0m"    // Reset

template <typename T>
typename T::iterator easyfind(T& container, int value) {
	typename T::iterator it = std::find(container.begin(), container.end(), value);

	if (it == container.end()) {
		throw std::runtime_error("Value not found");
	}

	return it;
}

#endif
