# ifndef	HUMANB_HPP
#define		HUMANB_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanB{
	Weapon		*weapon;
	std::string	name;
	public:
		HumanB();
		HumanB(std::string name);
		~HumanB();
		void		setWeapon(Weapon &name);
		void	attack();
};

#endif