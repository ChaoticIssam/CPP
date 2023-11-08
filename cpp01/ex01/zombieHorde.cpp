#include "Zombie.hpp"

Zombie::~Zombie(){
	std::cout << name << " has been destroyed" << std::endl;
}

Zombie	*zombieHorde(int N, std::string name){
	Zombie	*obj = new	Zombie[N];
	for (int i = 0; i < N; ++i){
		obj[i].setter(name);
		obj[i].announce();
	}
	return obj;
}
