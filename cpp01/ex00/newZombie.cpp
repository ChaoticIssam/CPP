#include "Zombie.hpp"

Zombie*	newZombie(std::string nom){
	Zombie  *obj = new Zombie(nom);
    return obj;
}
