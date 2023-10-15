# ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class	Weapon{
	std::string	type;
	public:
		Weapon();
		Weapon(std::string type);
		~Weapon();
		std::string	&get_Type();
		void		setType(std::string	type);
};

#endif