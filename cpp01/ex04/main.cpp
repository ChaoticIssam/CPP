#include <fstream>
#include <iostream>
#include <sstream>

int	main(int ac, char **av){
	if (ac != 4){
		std::cout << "Error: Not enough arguments provided." << std::endl;
		return 1;
	}
	std::ifstream	inf(av[1]);
	if (!inf){
		std::cout << "Error: Uh oh, this file does not exist." << std::endl;
		return 1;
	}
	std::string		name = av[1];
	name = name + ".replace";
	std::ofstream	outf(name);
	if (outf.is_open()){
		outf << inf;
		outf.close();
	}
}