# ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon{
	std::string	type;
	public:
		std::string	&get_Type();
		void		setType(std::string	type);
};

#endif