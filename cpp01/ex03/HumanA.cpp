#include "HumanA.hpp"

HumanA::HumanA(){

}

HumanA::HumanA(std::string name, Weapon weaponType){
	this->weapon = weaponType.get_Type();
	this->name = name;
}

HumanA::~HumanA(){

}

void	HumanA::attack(){
	std::cout << this->name << " attakcs with their " << this->weapon << std::endl;
}