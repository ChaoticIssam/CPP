#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
  try {
    PresidentialPardonForm F("PARDON FORM");
    Bureaucrat mark("CHAOTIC", 4);
    mark.signForm(F);
    mark.executeForm(F);
  } catch (std::exception &e) {
    std::cout << e.what();
  }
  try{
    RobotomyRequestForm F("ROBOT");
    Bureaucrat mark("CHAOTIC", 13);
    std::cout << F << std::endl;
    mark.signForm(F);
    std::cout << F << std::endl;
    mark.executeForm(F);
  }
  catch (std::exception &e) {
    std::cout << e.what();
  }
  try{
    ShrubberyCreationForm F("chajra");
    Bureaucrat mark("CHAOTIC", 13);
    mark.signForm(F);
    mark.executeForm(F);
  }
  catch (std::exception &e) {
    std::cout << e.what();
  }
}