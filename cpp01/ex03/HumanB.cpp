#include "HumanB.hpp"

HumanB::HumanB(std::string name){
	this->name = name;
}

HumanB::~HumanB(){

}

void	HumanB::setWeapon(Weapon &name){
	this->weapon = &name;
}

void	HumanB::attack(){
	std::cout << this->name << " attakcs with their " << this->weapon->get_Type() << std::endl;
}