#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP


#include <iostream>
#include "AForm.hpp"

class   AForm;

class   PresidentialPardonForm : public AForm{
        const std::string   _target;
    public:
        PresidentialPardonForm();
        PresidentialPardonForm(std::string target);
        PresidentialPardonForm(PresidentialPardonForm& obj);
        PresidentialPardonForm& operator=(PresidentialPardonForm& obj);
        ~PresidentialPardonForm();
        void	execute(Bureaucrat const & executor) const;
};

#endif
