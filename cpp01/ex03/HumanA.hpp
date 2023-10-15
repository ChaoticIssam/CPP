# ifndef	HUMANA_HPP
#define		HUMANA_HPP

#include "HumanB.hpp"
#include <iostream>

class	HumanA{
	Weapon	&weapon;
	std::string	name;
	public:
		HumanA(std::string name, Weapon &weaponType);
		~HumanA();
		void	attack();
};

#endif