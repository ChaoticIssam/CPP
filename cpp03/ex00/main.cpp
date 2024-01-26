#include "ClapTrap.hpp"

int main(){
    ClapTrap    obj;

    obj.attack("2");
    // obj.attack("2");
    // obj.attack("2");
    // obj.attack("2");
    // obj.attack("2");
    // obj.attack("2");
    // obj.attack("2");
    // obj.attack("2");
    // obj.attack("2");
    // obj.attack("2");
    obj.beRepaired(2);
    obj.takeDamage(10);
    obj.attack("2");
    obj.takeDamage(42);
    obj.attack("2");
}