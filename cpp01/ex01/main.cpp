#include "Zombie.hpp"

int	main(){
	int	N = 10;
	Zombie	*Horde = zombieHorde(N, "ZOMBIE");
	delete[] Horde;
	return 0;
}