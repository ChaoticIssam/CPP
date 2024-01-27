#include "Animal.hpp"

Animal::Animal(){
    std::cout << "Animal's default constructor has been called!" << std::endl;
}

Animal::Animal(std::string type){
    std::cout << "Animal's parametrized constructor has been called!" << std::endl;
    this->type = type;
}
Animal::Animal(const Animal& obj){
    std::cout << "Animal's copy constructor has been called!" << std::endl;
    *this = obj;
}
Animal& Animal::operator=(const Animal &obj){
    std::cout << "Animal's copy assignement operator overload has been called!" << std::endl;
    this->type = obj.type;
    return *this;
}

Animal::~Animal(){
    std::cout << "Animal's destructor has been called!" << std::endl;
}

void    Animal::setType(std::string type){
    this->type = type;
}

std::string    Animal::getType(){
    return (type);
}

void    Animal::makeSound(){

}