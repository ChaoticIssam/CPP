#include "ScravTrap.hpp"

ScravTrap::ScravTrap(){
    std::cout << "Default constructor of ScravTrap has been called!" << std::endl;
}

ScravTrap::~ScravTrap(){
    std::cout << "Destructor of ScravTrap has been called!" << std::endl;
}

ScravTrap::ScravTrap(std::string name) : ClapTrap(name){
    std::cout << "Parametrized constructor of ScravTrap has been called!" << std::endl;
}

ScravTrap::ScravTrap(const ScravTrap &obj){
    std::cout << "ScravTrap's copy constructor has been called!" << std::endl;
    *this = obj;
}

ScravTrap& ScravTrap::operator=(const ScravTrap &obj){
    std::cout << "ScravTrap's copy assignment operator overload has been called!" << std::endl;
    this->name = obj.name;
    return (*this);
}

void    ScravTrap::attack(const std::string& target){
    if (HitPoints == 0)
        std::cout << "ScravTrap " << this->name << " is dead." << std::endl;
    else if (EnergyPoints == 0)
        std::cout << "ScravTrap " << this->name << " has no energy." << std::endl;
    else{
        EnergyPoints--;
        std::cout << "ScravTrap " << this->name << " attacks " << target << ", causing "
            << this->AttackDamage << " points of damage! " << std::endl;
    }
}

void    ScravTrap::guardGate(){
    std::cout << "ScravTrap is now in Gate keeper mode." << std::endl;
}