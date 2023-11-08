#include "Zombie.hpp"

int	main()
{
	Zombie *obj = newZombie("999");
	obj->affZombie();
	randomChump("666");
	delete obj;
	return 0;
}
