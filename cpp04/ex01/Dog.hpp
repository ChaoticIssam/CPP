#ifndef DOG_HPP
#define DOG_HPP

#include "Brain.hpp"

class Dog : public Animal{
        Brain*  Braiiiin;
    public:
        Dog();
        Dog(std::string type);
        Dog(const Dog& obj);
        Dog& operator=(const Dog& obj);
        void    makeSound() const;
        ~Dog();
};

#endif