# ifndef	ZOMBIE_HPP
#define		ZOMBIE_HPP

# include <iostream>

class	Zombie
{
	std::string	name;
	public:
		Zombie(std::string name);
		~Zombie();
		void	announce(void);
		void	affZombie(void);
};
Zombie*	newZombie(std::string nom);
void	randomChump(std::string name);

#endif