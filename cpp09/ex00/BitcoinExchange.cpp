#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange(){
}

BitcoinExchange::~BitcoinExchange(){
}

void BitcoinExchange::addCurrency(std::string currency, float value){
	_currencies[currency] = value;
}

void BitcoinExchange::printCurrencies(){
	for (std::map<std::string, float>::iterator it = _currencies.begin(); it != _currencies.end(); it++){
		std::cout << it->first << ": " << it->second << std::endl;
	}
}

void BitcoinExchange::fillCurrencies(std::string filename){
	std::ifstream file(filename);
	if (!file.is_open())
		throw "Error: file not found";
	std::string line;
	while (std::getline(file, line)){
		size_t	pos = line.find(",");
		if (pos == std::string::npos)
			throw "Error: invalid file format";
		std::string date = line.substr(0, pos);
		float value = std::atof(line.substr(pos + 1).c_str());
		addCurrency(date, value);
	}
}

void	file2Parssing(std::string filename, BitcoinExchange &exchange){
	std::ifstream file(filename);
	if (!file.is_open())
		throw "Error: file not found";
	std::string line;
	int lock = 1;
	while (std::getline(file, line)){
		if (lock){
			if (line != "date | value")
				throw "Error: invalid file format";
			lock = 0;
			continue;
		}
		parssLine(line, exchange);
	}
}

void	parssLine(std::string line, BitcoinExchange &exchange){
	size_t	pos = line.find("|");
	if (pos == std::string::npos){
		std::cout << "Error: Bad input => " << line << std::endl;
		return ;
	}
	std::string date = line.substr(0, pos);
	std::string valueStr = line.substr(pos + 1);
	for (size_t i = 0; i < valueStr.size(); i++){
		if (i == 0 && valueStr[i] == ' ')
			i++;
		if (valueStr[i] < '0' || valueStr[i] > '9'){
			if (valueStr[i] != '.' && valueStr[i] != '-'){
				std::cout << "Error: not num value" << std::endl;
				return ;
			}
		}
	}
	if (!checkDate(date))
		return ;
	float value = std::atof(line.substr(pos + 1).c_str());
	if (!checkValue(value))
		return ;
	exchange._BitcoinHolded[date] = value;
}

bool	checkDate(std::string date){
	if (date.size() != 11){
		std::cout << "Error: invalid date format" << std::endl;
		return false;
	}
	else if (date[4] != '-' || date[7] != '-'){
		std::cout << "Error: invalid date format" << std::endl;
		return false;
	}
	else{
		for (int i = 0; i < 10; i++){
			if (i == 4 || i == 7)
				continue;
			if (date[i] < '0' || date[i] > '9'){
				std::cout << "Error: not num value" << std::endl;
				return false;
			}
		}
	}
	return true;
}

bool	checkValue(float value){
	if (value < 0){
		std::cout << "Error: not positive value." << std::endl;
		return false;
	}
	else if (value > 1000){
		std::cout << "Error: too large value." << std::endl;
		return false;
	}
	return true;
}
