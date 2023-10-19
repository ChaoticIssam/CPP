#include "Replace.hpp"

int	main(int ac, char **av){
	Replace	obj;
	if (ac != 4){
		obj.errorPrint(1);
		return 1;
	}
	obj.setSub(av[2]);
	obj.setRep(av[3]);
	if (!obj.checkParameters())
		return 0;
	std::ifstream	inf(av[1]);
	if (!inf){
		obj.errorPrint(2);
		return 1;
	}
	std::string		name = av[1];
	name = name + ".replace";
	std::ofstream	outf(name);
	if (outf.is_open()){
		obj.openFile(outf, inf);
		outf.close();
	}
}