#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weaponType) : weapon(weaponType){
	this->name = name;
}

HumanA::~HumanA(){

}

void	HumanA::attack(){
	std::cout << this->name << " attakcs with their " << this->weapon.get_Type() << std::endl;
}