# ifndef	HUMANA_HPP
#define		HUMANA_HPP

#include <iostream>
#include "Weapon.hpp"

class	HumanA{
	Weapon		weapon;
	std::string	name;
	public:
		void	attack();
		void	setter(std::string name);
};

#endif