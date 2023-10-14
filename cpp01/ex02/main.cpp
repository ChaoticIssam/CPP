#include <iostream>

int	main(){
	std::string Brain = "HI THIS IS BRAIN";
	std::string	*brainPtr = &Brain;
	std::string &brainReference = Brain;
	std::cout << "     ***** ADDRESSES *****" << std::endl;
	std::cout << "Brain address: " << &Brain << std::endl;
	std::cout << "brainPtr address: " << &brainPtr << std::endl;
	std::cout << "brainReference address: " << &brainReference << std::endl;
	std::cout << "     ***** VALUES *****" << std::endl; 
	std::cout << "Brain value: " << Brain << std::endl;
	std::cout << "brainPtr value: " << *brainPtr << std::endl;
	std::cout << "brainReference value: " << brainReference << std::endl;
	return 0; 
}