# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie{
	std::string	name;
	public:
		~Zombie();
		void	announce(void);
		void	setter(std::string name);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
