#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound(); //will output the cat sound!
    j->makeSound();
    meta->makeSound();
    delete i;
    delete j;
    delete meta;

    return 0;

    // Animal* meta = new Animal();
    // WrongAnimal* Wrongmeta = new WrongAnimal();
    // Animal* j = new Dog();
    // Animal* x = new Cat();
    // WrongAnimal* i = new WrongCat();
    // std::cout << j->getType() << " " << std::endl;
    // std::cout << i->getType() << " " << std::endl;
    // std::cout << x->getType() << " " << std::endl;
    // i->makeSound(); //will output the cat sound!
    // x->makeSound();
    // j->makeSound();
    // meta->makeSound();
    // Wrongmeta->makeSound();
    

    // return 0;
    // Animal meta;
    // Dog j;
    // Cat i;
    // std::cout << j.getType() << " " << std::endl;
    // std::cout << i.getType() << " " << std::endl;
    // i.makeSound(); //will output the cat sound!
    // j.makeSound();
    // meta.makeSound();

    // return 0;
}