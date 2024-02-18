#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), _target("DEFAULT"){
    // std::cout << "PresidentialPardonForm's Default constructor has been called." << std::endl;
} 
PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5), _target(target){
    // std::cout << "PresidentialPardonForm's Parametrized constructor has been called." << std::endl;
} 
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& obj) : AForm("PresidentialPardonForm", 25, 5), _target(obj._target){
    // std::cout << "PresidentialPardonForm's copy constructor has been called." << std::endl;
}
PresidentialPardonForm& PresidentialPardonForm::operator=(PresidentialPardonForm&obj){
    std::cout << "PresidentialPardonForm's copy " << std::endl;
    (void)obj;
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(){
//    std::cout << "PresidentialPardonForm's destructor has been called." << std::endl;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const{
    if (executor.getGrade() > 25 || !getSign())
        throw Bureaucrat::GradeTooLowException();
    std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

