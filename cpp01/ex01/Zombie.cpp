#include "Zombie.hpp"

void	Zombie::setter(std::string name){
	this->name = name;
}

void	Zombie::announce(void){
	static int i;
	std::cout << name << i++ << " :Moar brainz!" << std::endl;
}
