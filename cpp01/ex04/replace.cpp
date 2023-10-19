#include "Replace.hpp"

void	Replace::setSub(char *str){
	this->sub = str;
}

void	Replace::setRep(char *str){
	this->rep = str;
}

void	Replace::errorPrint(int error){
	if (error == 1)
		std::cout << "Error: Not enough arguments provided." << std::endl;
	else if (error == 2)
		std::cout << "Error: Uh oh, this file does not exist." << std::endl;
}

int		Replace::checkParameters(void){
	if (this->sub.empty() || this->rep.empty())
		return 0;
	return 1;
}

void	Replace::openFile(std::ofstream &outf, std::ifstream &inf){
	std::string	line;

	while (std::getline(inf, line)){
		size_t	found = line.find(sub);
		while (found != std::string::npos){
			line.erase(found, sub.length());
			line.insert(found, rep);
			found = line.find(sub, found + sub.length());
		}
		outf << line;
		outf << std::endl;
	}
}
