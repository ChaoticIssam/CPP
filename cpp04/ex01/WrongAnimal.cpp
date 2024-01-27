#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(){
    std::cout << "WrongAnimal's default constructor has been called!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type){
    std::cout << "WrongAnimal's parametrized constructor has been called!" << std::endl;
    this->type = type;
}
WrongAnimal::WrongAnimal(const WrongAnimal& obj){
    std::cout << "WrongAnimal's copy constructor has been called!" << std::endl;
    *this = obj;
}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &obj){
    std::cout << "WrongAnimal's copy assignement operator overload has been called!" << std::endl;
    this->type = obj.type;
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "WrongAnimal's destructor has been called!" << std::endl;
}

void    WrongAnimal::setType(std::string type){
    this->type = type;
}

std::string    WrongAnimal::getType(){
    return (type);
}

void    WrongAnimal::makeSound(){

}