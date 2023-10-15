#include "Weapon.hpp"
#include "stdio.h"

Weapon::Weapon(){

}

Weapon::Weapon(std::string type){
	this->setType(type);
}

Weapon::~Weapon(){
	
}

void	Weapon::setType(std::string	type){
	this->type = type;
}

std::string&	Weapon::get_Type(){
	std::string	&typeReference = this->type;
	return	typeReference;
}
