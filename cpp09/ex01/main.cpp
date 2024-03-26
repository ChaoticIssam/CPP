#include "RPN.hpp"

int main(int ac, char **av){
	RPN rpn;	
	try{
		if (ac != 2)
			throw "Error: invalid number of arguments";
		rpn.run(av[1]);
		rpn.print();
	}
	catch (const char *e){
		std::cerr << e << std::endl;
		return 1;
	}
	catch (std::invalid_argument){
				throw std::runtime_error("Error: invalid argument");
				return 1;
	}
}