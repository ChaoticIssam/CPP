#include "Zombie.hpp"

Zombie*	Zombie::newZombie(std::string nom){
	Zombie  *obj = new Zombie;
	setterZombie(nom);
	announce();
    return obj; 
}
