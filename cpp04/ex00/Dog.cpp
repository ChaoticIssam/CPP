#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog's default constructor has been called!" <<std::endl;
    type = "Dog";
}

Dog::Dog(std::string type){
    std::cout << "Dog's parametrized constructor has been called!" << std::endl;
    this->type = type;
}

Dog::Dog(const Dog& obj){
    std::cout << "Dog's copy constructor has been called!" << std::endl;
    *this = obj;
}

Dog& Dog::operator=(const Dog& obj){
    std::cout << "Dog's copy assignement operator overload has been called!" << std::endl;
    this->type = obj.type;
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog's destructor has been called!" << std::endl;
}

void    Dog::makeSound() const{
    std::cout << "Barking..." << std::endl;
}