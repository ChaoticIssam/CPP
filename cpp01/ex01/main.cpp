#include "Zombie.hpp"

int	main(){
	int	N = 5;
	Zombie	*Horde = zombieHorde(N, "ZOMBIE");
	delete[] Horde;
	return 0;
}