#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", false, 72, 45), _target("DEFAULT"){
    std::cout << "RobotomyRequestForm's Default constructor has been called." << std::endl;
} 
RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", false, 72, 45), _target(target){
    std::cout << "RobotomyRequestForm's Parametrized constructor has been called." << std::endl;
} 
RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& obj) : AForm("RobotomyRequestForm", false, 72, 45), _target(obj._target){
    std::cout << "RobotomyRequestForm's copy constructor has been called." << std::endl;
}
RobotomyRequestForm& RobotomyRequestForm::operator=(RobotomyRequestForm&obj){
    std::cout << "RobotomyRequestForm's copy " << std::endl;
    (void)obj;
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm's Destructor has been called." << std::endl;
} 

void    RobotomyRequestForm::execute(Bureaucrat const& executor){
    if (executor.getGrade() > 72 || getSign() == false)
        throw Bureaucrat::GradeTooLowException();
    std::cout << "*Drilling noises*" << std::endl;
    sleep(1);
    srand((unsigned) time(NULL));
    int r = rand();
    if (r % 2 == 0)
        std::cout << _target << " has been  robotomized successfully" << std::endl;
    else if (r % 2 != 0)
        std::cout << _target << " has failed" << std::endl;
}
