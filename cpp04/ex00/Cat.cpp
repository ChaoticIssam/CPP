#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat's default constructor has been called!" << std::endl;
    type = "Cat";
}

Cat::Cat(std::string type){
    std::cout << "Cat's parametrized constructor has been called!" << std::endl;
    this->type = type;
}

Cat::Cat(const Cat& obj){
    std::cout << "Cat's copy constructor has been called!" << std::endl;
    *this = obj;
}

Cat& Cat::operator=(const Cat& obj){
    std::cout << "Cat's copy assignement operator overload has been called!" << std::endl;
    this->type = obj.type;
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat's destructor has been called!" << std::endl;
}

void    Cat::makeSound() const{
    std::cout << "Purring..." << std::endl;
}
