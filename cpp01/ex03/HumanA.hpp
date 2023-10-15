# ifndef	HUMANA_HPP
#define		HUMANA_HPP

#include "HumanB.hpp"
#include <iostream>

class	HumanA{
	std::string	weapon;
	std::string	name;
	public:
		HumanA();
			HumanA(std::string name, Weapon weaponType);
		~HumanA();
		void	attack();
};

#endif