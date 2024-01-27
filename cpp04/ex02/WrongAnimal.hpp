#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>

class WrongAnimal{
    protected:
        std::string type;
    public:
        WrongAnimal();
        WrongAnimal(std::string type);
        WrongAnimal(const WrongAnimal& obj);
        WrongAnimal& operator=(const WrongAnimal &obj);
        virtual ~WrongAnimal();
        void            setType(std::string type);
        std::string     getType();
        virtual void            makeSound() = 0;
};


#endif