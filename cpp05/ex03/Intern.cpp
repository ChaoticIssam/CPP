#include "Intern.hpp"

#include <string.h>

Intern::Intern(){
    std::cout << "Intern's Default constructor has been called." << std::endl;
}
Intern::Intern(Intern& obj){
    std::cout << "Intern's Copy constructor has been called." << std::endl;
    *this = obj;
}
Intern& Intern::operator=(Intern& obj){
    std::cout << "Intern's Copy assignement operator has been called." << std::endl;
    (void) obj;
    return (*this);
}
Intern::~Intern(){
    std::cout << "Intern's Destructor has been called." << std::endl;
}

int Intern::returnCase(std::string forName){
    std::string cases[] = {"Presidential Pardon", "Robotomy Request", "Shrubbery Creation"};
    int         caseIndex = 0;
    while (caseIndex <= 2){
        if (forName == cases[caseIndex])
            return (caseIndex);
        caseIndex ++;
    }
    return (-1);
}

AForm*   Intern::makeForm(std::string formName, std::string formTarget){
    int x = returnCase(formName);
    AForm *Form = NULL;
    switch(x){
        case 0 :
            std::cout << "Intern creates " <<  formName << std::endl;
            Form = new PresidentialPardonForm(formTarget);
            return(Form);
        case 1 :
            std::cout << "Intern creates " <<  formName << std::endl;
            Form = new RobotomyRequestForm(formTarget);
            return (Form);
        case 2 :
            std::cout << "Intern creates " <<  formName << std::endl;
            Form = new ShrubberyCreationForm(formTarget);
            return (Form);
        default :
            std::cout << "ERROR: " << formName << " is not a valid form." << std::endl;
            break;
    }
    return Form;
}

