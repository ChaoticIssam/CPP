#include "WrongCat.hpp"

WrongCat::WrongCat(){
    std::cout << "WrongCat's default constructor has been called!" << std::endl;
    type = "Cat";
}

WrongCat::WrongCat(std::string type){
    std::cout << "WrongCat's parametrized constructor has been called!" << std::endl;
    this->type = type;
}

WrongCat::WrongCat(const WrongCat& obj){
    std::cout << "WrongCat's copy constructor has been called!" << std::endl;
    *this = obj;
}

WrongCat& WrongCat::operator=(const WrongCat& obj){
    std::cout << "WrongCat's copy assignement operator overload has been called!" << std::endl;
    this->type = obj.type;
    return *this;
}

WrongCat::~WrongCat(){
    std::cout << "WrongCat's destructor has been called!" << std::endl;
}

void    WrongCat::makeSound(){
    std::cout << "Squicking..." << std::endl;
}
