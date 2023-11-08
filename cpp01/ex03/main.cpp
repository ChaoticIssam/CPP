#include "HumanA.hpp"

int	main(){
	{
		Weapon	obj = Weapon("Gun");

		HumanA bob("Bob", obj);
		bob.attack();
		obj.setType("Knife");
		bob.attack();
	}
	{
		Weapon obj = Weapon("Fists");

		HumanB	jim("Jim");
		jim.setWeapon(obj);
		jim.attack();
		obj.setType("Crude spiked club");
		jim.attack();
	}
	return 0;
}