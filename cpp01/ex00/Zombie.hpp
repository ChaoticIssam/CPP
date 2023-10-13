# ifndef	ZOMBIE_HPP
#define		ZOMBIE_HPP

# include <iostream>
# include <cctype>

class	Zombie{
	std::string	name;
	public:
		void	setterZombie(std::string name);
		void	announce(void);
		Zombie*	newZombie(std::string nom);
		void	affZombie(void);
};

#endif