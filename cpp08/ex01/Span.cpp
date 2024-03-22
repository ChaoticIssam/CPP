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

int		Span::shortestSpan(){
	if (_V.size() < 2)
		throw std::invalid_argument("Not enough values");
	std::sort(_V.begin(), _V.end());
	int min = _V[1] - _V[0];
	for (unsigned int i = 1; i < _V.size(); i++)
		if (_V[i] - _V[i - 1] < min)
			min = _V[i] - _V[i - 1];
	return min;
}

int		Span::longestSpan(){
	if (_V.size() < 2)
		throw std::invalid_argument("Not enough values");
	std::sort(_V.begin(), _V.end());
	return _V[_V.size() - 1] - _V[0];
}

void	Span::addManyNumbers(int arr[], unsigned int size){
	if (_V.size() + size > _N)
		throw std::invalid_argument("Not enough space");
	for (unsigned int i = 0; i < size; i++)
		addNumber(arr[i]);
}
