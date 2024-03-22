#include "Span.hpp"

int	main(){
	try{
		Span sp = Span(5);
		int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
		sp.addManyNumbers(arr, 5);
		std::cout << "longestSpan: " << sp.longestSpan() << std::endl;
		std::cout << "shortestSpan: " << sp.shortestSpan() << std::endl;
		// for (unsigned int i = 0; i < 5; i++)
		// 	std::cout << sp._V[i] << std::endl;
	}
	catch(const std::invalid_argument &e){
		std::cout << e.what() << std::endl;
	}
	return 0;
}