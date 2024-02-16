#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    try{
        Bureaucrat  A("BUREAUCRAT", 12);
        PresidentialPardonForm C("STEVE");
        A.executeForm(C);
        C.beSigned(A);
        C.execute(A);
    }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
}