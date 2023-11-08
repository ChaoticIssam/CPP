#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
	this->weapon = NULL;
}

HumanB::~HumanB(){

}

void	HumanB::setWeapon(Weapon &name){
	this->weapon = &name;
}

void	HumanB::attack(){
	if (this->weapon == NULL)
	{
		std::cout << this->name << " doesn't have a weapon" << std::endl;
		return ;
	}
	std::cout << this->name << " attakcs with their " << this->weapon->get_Type() << std::endl;
}