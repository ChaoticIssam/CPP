# ifndef REPLACE_HPP
#define	REPLACE_HPP

#include <fstream>
#include <iostream>
#include <sstream>

class	Replace{
	std::string	sub;
	std::string	rep;
	public:
		void	setSub(char *str);
		void	setRep(char *str);
		void	errorPrint(int error);
		int		checkParameters(void);
		void	openFile(std::ofstream &outf, std::ifstream &inf);
};
#endif