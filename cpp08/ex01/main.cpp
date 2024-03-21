#include "Span.hpp"

int	main(){
	try{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(18);
		sp.addNumber(11);
		sp.addNumber(131);
		for(int i = 0; i < 5; i++)
			std::cout << sp._V[i] << std::endl;
	}
	catch(const std::invalid_argument &e){
		std::cout << e.what() << std::endl;
	}
	// std::cout << sp.shortestSpan() << std::endl;
	// std::cout << sp.longestSpan() << std::endl;
	return 0;
}