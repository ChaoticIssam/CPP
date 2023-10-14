#include "Zombie.hpp"

void	Zombie::affZombie(void){
	std::cout << name << std::endl;
}

void	randomChump(std::string name){
	Zombie	obj;

	obj.setterZombie(name);
	obj.announce();
}

void	destroyZombie(std::string name){
	std::cout << name << " has been destroyed" << std::endl;
}

int	main(){
	Zombie *obj = new Zombie;

	obj->newZombie("Zombie");
	randomChump("Chump");
	destroyZombie("Chump");
	delete(obj);
	destroyZombie("Zombie");
	return 0;
}