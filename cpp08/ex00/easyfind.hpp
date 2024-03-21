#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <vector>
#include <iostream>
#include <algorithm>
 
template <typename T>
typename T::iterator easyfind(T& container, const int integer){
	typename T::iterator it = std::find(container.begin(), container.end(), integer);
	if (it == container.end())
		throw std::invalid_argument("Value not found");
	return it;
};

#endif