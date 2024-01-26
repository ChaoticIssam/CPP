#ifndef CAT_HPP
#define CAT_HPP

#include "Brain.hpp"

class Cat : public Animal{
    private:
        Brain*  Braiiiin;
    public:
        Cat();
        Cat(std::string type);
        Cat(const Cat& obj);
        Cat& operator=(const Cat& obj);
        void    makeSound();
        ~Cat();
};

#endif