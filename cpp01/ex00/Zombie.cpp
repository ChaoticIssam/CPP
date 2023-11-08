#include "Zombie.hpp"

Zombie::Zombie(std::string name){
	this->name = name;
}

void	Zombie::affZombie(void){
	std::cout << name << std::endl;
}

Zombie::~Zombie(){
	std::cout << name << " has been destroyed" << std::endl;
}

void	Zombie::announce(void){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
