#include "Zombie.hpp"

void	Zombie::setter(std::string name){
	this->name = name;
}

void	Zombie::announce(void){
	std::cout << name << " :Moar brainz!" << std::endl;
}
