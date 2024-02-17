
#include "Bureaucrat.hpp"

int main() {
  try{
    Form f("Contrat", 10, 41);
    Form &a = f;
    f = a;
    Bureaucrat mark("CHAOTIC", 90);
    std::cout << mark << std::endl;
    std::cout << f << std::endl;
    mark.signForm(f);
    std::cout << f << std::endl;
    mark.incrementGrade();
    std::cout << mark << std::endl;
    mark.signForm(f);
  }
  catch(std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
}