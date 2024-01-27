#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *a[4];

    for (int i = 0; i < 4; i++)
    {
        if (i % 2 == 0)
            a[i] = new Dog();
        else
            a[i] = new Cat();
    }
    std::cout << std::endl;
    for (int i = 0; i < 4; i++)
    {
        a[i]->makeSound();
        delete a[i];
        std::cout << std::endl;
    }
    return 0;

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