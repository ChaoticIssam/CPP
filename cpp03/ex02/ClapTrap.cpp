#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "ClapTraps's default constructor has been called!" << std::endl;
    name = "Default";
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTraps's destructor has been called!" << std::endl;
}

ClapTrap::ClapTrap(std::string name){
    std::cout << "ClapTraps's parametrized constructor of ClapTrap has been called!" << std::endl;
    this->name = name;
    HitPoints = 100;
    EnergyPoints = 100;
    AttackDamage = 30;
}

ClapTrap::ClapTrap(const ClapTrap &obj){
    std::cout << "ClapTrap's copy constructor has been called!" << std::endl;
    *this = obj;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &obj){
    std::cout << "ClapTrap's copy assignment operator overload has been called!" << std::endl;
    this->name = obj.name;
    return (*this);
}

void    ClapTrap::attack(const std::string& target){
    if (HitPoints == 0)
        std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
    else if (EnergyPoints == 0)
        std::cout << "ClapTrap " << this->name << " has no energy." << std::endl;
    else{
        EnergyPoints--;
        std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing "
            << this->AttackDamage << " points of damage! " << std::endl;
    }
}
void    ClapTrap::takeDamage(unsigned int amount){
    if (HitPoints == 0)
        std::cout << "ClapTrap " << this->name << " is already dead." << std::endl;
    else {
        if (HitPoints >= amount)
            HitPoints -= amount;
        else
            HitPoints = 0;
        std::cout << "ClapTrap " << this->name << " took " << amount << " damage" << std::endl;
    }
}

void    ClapTrap::beRepaired(unsigned int amount){
    if (HitPoints == 0)
        std::cout << "ClapTrap " << this->name << " is dead." << std::endl;
    else if (EnergyPoints == 0)
        std::cout << "ClapTrap " << this->name << " has no energy." << std::endl;
    else{
        EnergyPoints--;
        HitPoints += amount;
        std::cout << "ClapTrap " << this->name << " has been repaired." << std::endl;
    }

}