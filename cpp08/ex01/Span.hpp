#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>
#include <iostream>
#include <algorithm>

class Span{
	unsigned int _N;
	public:
		std::vector<int> _V;
		Span(unsigned int N);
		void	addNumber(int n);
		int		shortestSpan();
		int		longestSpan();

};

#endif