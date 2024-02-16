#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "AForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotmyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class   Intern{
    public:
        Intern();
        Intern(Intern& obj);
        Intern& operator=(Intern& obj);
        ~Intern();
        AForm   *makeForm(std::string formName, std::string formTarget);
        int     returnCase(std::string forName);
};

#endif