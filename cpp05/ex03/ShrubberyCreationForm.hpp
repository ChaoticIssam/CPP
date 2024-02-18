#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <fstream>
#include <sstream>
#include "AForm.hpp"

class AForm;

class   ShrubberyCreationForm : public AForm{
    std::string _target;
    public:
        ShrubberyCreationForm();
        ShrubberyCreationForm(std::string target);
        ShrubberyCreationForm(ShrubberyCreationForm& obj);
        ShrubberyCreationForm&  operator=(ShrubberyCreationForm& obj);
        ~ShrubberyCreationForm();
        void	execute(Bureaucrat const & executor) const;
};

#endif