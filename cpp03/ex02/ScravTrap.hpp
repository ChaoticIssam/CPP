#ifndef SCRAVTRAP_HPP
#define SCRAVTRAP_HPP

#include "ClapTrap.hpp"

class ScravTrap : public ClapTrap{
    public:
        ScravTrap();
        ScravTrap(std::string name);
        ScravTrap(const ScravTrap &obj);
        ScravTrap& operator=(const ScravTrap &obj);
        ~ScravTrap();
        void    attack(const std::string& target);
        void    guardGate();
};

#endif