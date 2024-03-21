#include "Span.hpp"

template <typename T>
bool easyfind(T& container, const int integer){
	typename T::iterator it = std::find(container.begin(), container.end(), integer);
	if (it == container.end())
		return false;
	return true;
}

Span::Span(unsigned int N){_N = N;}

void	Span::addNumber(int n){
	if (_V.size() > 0)
		if (easyfind(_V, n))
			throw std::invalid_argument("Value already exists");
	_V.push_back(n);
}

// int		Span::shortestSpan(){

// }

// int		Span::longestSpan(){

// }
