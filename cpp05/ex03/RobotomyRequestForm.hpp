#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"
#include <fstream>
#include <sstream>
#include <unistd.h>
#include<cstdlib>

class   AForm;

class   RobotomyRequestForm : public AForm{
    const std::string _target;
    public:
       RobotomyRequestForm(); 
       RobotomyRequestForm(std::string target); 
       RobotomyRequestForm(RobotomyRequestForm& obj); 
       RobotomyRequestForm& operator=(RobotomyRequestForm&obj);
       ~RobotomyRequestForm(); 
       void	execute(Bureaucrat const & executor);
};

#endif