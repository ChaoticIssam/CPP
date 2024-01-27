#include "Dog.hpp"

Dog::Dog(){
    std::cout << "Dog's default constructor has been called!" <<std::endl;
    type = "Dog";
    Braiiiin = new Brain();
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
    delete Braiiiin;
    this->Braiiiin = obj.Braiiiin;
    for (int i = 0; i < 100; i++)
        this->Braiiiin[i] = obj.Braiiiin[i];
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog's destructor has been called!" << std::endl;
    delete Braiiiin;
}

void    Dog::makeSound(){
    std::cout << "Barking..." << std::endl;
}
