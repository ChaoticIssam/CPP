#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <iostream>
#include <string>
#include <vector>
#include <map>
#include <algorithm>
#include <fstream>
#include <iostream>
#include <sstream>

class BitcoinExchange{
	private:
		std::map<std::string, float> _currencies;
	public:
		BitcoinExchange();
		~BitcoinExchange();
		void addCurrency(std::string currency, float value);
		void printCurrencies();
		void fillCurrencies(std::string filename);
		void	printValue(std::string date, float value);
};
void	file2Parssing(std::string filename, BitcoinExchange &exchange);
void	parssLine(std::string line, BitcoinExchange &exchange);
bool	checkDate(std::string date);
bool	checkValue(float value);
bool isLeapYear(int year);
int returnDays(int year);

#endif