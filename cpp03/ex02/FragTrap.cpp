#include "FragTrap.hpp"

FragTrap::FragTrap(){
    std::cout << "FragTrap's default constructor has been called!" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name){
    std::cout << "FragTrap's parametrized constructor has been called!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &obj){
    std::cout << "FragTrap's copy constructor has been called!" << std::endl;
    *this = obj;
}

FragTrap& FragTrap::operator=(const FragTrap &obj){
    std::cout << "FragTrap's copy assignment operator overload has been called!" << std::endl;
    this->name = obj.name;
    return (*this);
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap's destuctor has been called!" << std::endl;
}

void    FragTrap::highFivesGuys(){
    std::cout << "Gimme five!" << std::endl;
}
