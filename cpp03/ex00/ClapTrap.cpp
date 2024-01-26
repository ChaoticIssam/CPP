#include "ClapTrap.hpp"

ClapTrap::ClapTrap(){
    std::cout << "Default constructor has been called!" << std::endl;
    name = "Default";
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
}

ClapTrap::~ClapTrap(){
    std::cout << "Destructor has been called!" << std::endl;
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

ClapTrap::ClapTrap(std::string name){
    std::cout << "Parametrized constructor has been called!" << std::endl;
    this->name = name;
    HitPoints = 10;
    EnergyPoints = 10;
    AttackDamage = 0;
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