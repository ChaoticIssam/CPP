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
	int count = 0;
	if (pos == std::string::npos){
		std::cout << "Error: Bad input => " << line << std::endl;
		return ;
	}
	std::string date = line.substr(0, pos);
	if (date[pos + 1]){
		std::cout << "Error: invalid date format" << std::endl;
		return ;
	}
	if (!checkDate(date))
		return ;
	std::string valueStr = line.substr(pos + 1);
	if (valueStr[0] != ' '){
		std::cout << "Error: invalid value format" << std::endl;
		return ;
	}
	for (size_t i = 1; i < valueStr.size(); i++){
		if (i == 1 && (valueStr[i] == '-' || valueStr[i] == '+'))
			i++;
		if (valueStr[i] == '.')
			count++;
		if (i == 0 && valueStr[i] == ' ')
			i++;
		if (valueStr[i] < '0' || valueStr[i] > '9'){
			if (valueStr[i] != '.'){
				std::cout << "Error: not num value" << std::endl;
				return ;
			}
		}
		if (count > 1){
			std::cout << "Error: invalid value format" << std::endl;
			return ;
		}
	}
	float value = std::atof(line.substr(pos + 1).c_str());
	if (!checkValue(value))
		return ;
	exchange.printValue(date, value);
	
}

void	BitcoinExchange::printValue(std::string date, float value){
	(void) value;
	std::map<std::string, float>::iterator it = this->_currencies.lower_bound(date);
	if (it != this->_currencies.begin())
		it--;
	std::cout << date << " => " << value << " = " << value * it->second << std::endl;
    
}

bool	checkDate(std::string date){
	int countDash = 0;
	for (size_t i = 0; i < date.size(); i++)
		if (date[i] == '-')
			countDash++;
	if (countDash != 2){
		std::cout << "Error: invalid date format" << std::endl;
		return false;
	}
	size_t	pos = date.find("-");
	std::string yearStr = date.substr(0, pos);
	size_t	pos2 = date.find("-", pos + 1);
	std::string monthStr = date.substr(pos + 1, pos2 - pos - 1);
	size_t pos3 = date.find(" ", pos2 + 1);
	std::string dayStr = date.substr(pos2 + 1, pos3 - pos2 - 1);
	int year = std::atoi(yearStr.c_str());
	int month = std::atoi(monthStr.c_str());
	int day = std::atoi(dayStr.c_str());
	if (yearStr.size() < 4 || monthStr.size() < 1 || monthStr.size() > 2 || dayStr.size() < 1 || dayStr.size() > 2){
		std::cout << "Error: invalid date format" << std::endl;
		return false;
	}
	if (year < 2009 || (year == 2009 && month < 1) || (year == 2009 && month == 1 && day < 2)){
		std::cout << "Error: invalid date format" << std::endl;
		return false;
	}
	else if (month == 2){
		if (day > 28){
			std::cout << "Error: invalid date format" << std::endl;
			return false;
		}
	}
	else if (month < 1 || month > 12){
		std::cout << "Error: invalid date format" << std::endl;
		return false;
	}
	else if (day < 1 || day > 31){
		std::cout << "Error: invalid date format" << std::endl;
		return false;
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
