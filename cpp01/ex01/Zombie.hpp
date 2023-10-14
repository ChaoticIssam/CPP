# ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class	Zombie{
	std::string	name;
	public:
		void	announce(void);
		void	setter(std::string name);
		void	getter(int index);
};

Zombie	*zombieHorde(int N, std::string name);

#endif
