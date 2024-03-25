#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	BitcoinExchange exchange;
	try{
		if (ac != 2)
			throw "Error: invalid number of arguments";
		std::ifstream file2(av[1]);
		if (!file2.is_open())
			throw "Error: file not found";
		exchange.fillCurrencies("data.csv");
		file2Parssing(av[1], exchange);
	}
	catch (const char *e){
		std::cerr << e << std::endl;
	}
	return 0;
}