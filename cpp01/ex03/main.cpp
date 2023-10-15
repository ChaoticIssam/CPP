#include "HumanA.hpp"

int	main(){
	Weapon	obj = Weapon("Gun");

	HumanA bob("Bob", obj);
	bob.attack();
	obj.setType("Knife");
	bob.attack();
}