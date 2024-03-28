#include "PmergeMe.hpp"

int main (int argc, char **argv){
	try{
		std::vector<int> v = thefunc(argc - 1, argv + 1);
		for (int i = 0; i < (int)v.size(); i++)
			std::cout << v[i] << " ";
		std::cout << std::endl;
		return 0;
	}
	catch (char const *str){
		std::cout << str << std::endl;
		return 1;
	}
}