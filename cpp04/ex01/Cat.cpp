#include "Cat.hpp"

Cat::Cat(){
    std::cout << "Cat's default constructor has been called!" << std::endl;
    type = "Cat";
    Braiiiin = new Brain();
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
    delete Braiiiin;
    this->Braiiiin = obj.Braiiiin;
    for (int i = 0; i < 100; i++)
        this->Braiiiin[i] = obj.Braiiiin[i];
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat's destructor has been called!" << std::endl;
    delete Braiiiin;
}

void    Cat::makeSound() const{
    std::cout << "Purring..." << std::endl; 
}
