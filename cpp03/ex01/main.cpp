#include "ScravTrap.hpp"

int main(){
    ScravTrap   obj1;
    // ClapTrap    obj2("Clap");

    obj1.attack("2");
    obj1.attack("2");
    obj1.attack("2");
    obj1.attack("2");
    obj1.attack("2");

    obj1.takeDamage(10);
    obj1.beRepaired(2);
    // obj2.attack("2");
    obj1.takeDamage(91);
    obj1.takeDamage(12);
    obj1.takeDamage(1);
    obj1.guardGate();
    // obj2.attack("2");
}