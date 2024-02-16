#include "Bureaucrat.hpp"

int main()	{
{
    try
    {
        Bureaucrat  B("john", 1);
        Bureaucrat  C;
        std::cout << "name: " << B.getName() << std::endl;
        std::cout << "grade: " << B.getGrade() << std::endl;
		B.incrementGrade();
		C.incrementGrade();
		C.decrementGrade();
        std::cout << "name: " << C.getName() << std::endl;
        std::cout << "grade: " << C.getGrade() << std::endl;
    }
    // catch(std::exception &exp)
    // {
    //     std::cerr << exp.what() << std::endl;
    //     return 1;
    // }
	catch(Bureaucrat::GradeTooHighException c){
		std::cerr << c.what() << std::endl;
		return 1;
	}
	catch(Bureaucrat::GradeTooLowException s){
		std::cerr << s.what() << std::endl;
		return 1;
	}

}
}