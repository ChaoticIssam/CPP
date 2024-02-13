#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("DEFAULT"), grade(150){

	std::cout << "Default constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade){
	this->name = name;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& obj){
	std::cout << "Copy constructor has been called." << std::endl;
	*this = obj;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat& obj){
	std::cout << "Copy assignement operator overload has been called." << std::endl;
	this->grade = obj.grade;
	this->name = obj.name;
	return (*this);
}

std::string	Bureaucrat::getName(){
	return name;
}

int	Bureaucrat::getGrade(){
	return grade;
}

void	Bureaucrat::incrementGrade(){
	if (grade - 1 < 1)
		throw GradeTooHighException();
	grade--;
}

void	Bureaucrat::decrementGrade(){
	if (grade + 1 > 150)
		throw GradeTooLowException();
	grade++;
}

Bureaucrat::~Bureaucrat(){

}

void Bureaucrat::signForm(Form &form) {
  try {
    form.beSigned(*this);
    std::cout << this->name << " signed " << form.getName() << std::endl;
  }
  catch (std::exception &e){
    std::cout << this->name << " couldn't sign " << form.getName()
              << " because " << e.what() << std::endl;
  }
}

std::ostream &	operator<<(std::ostream & out, Bureaucrat & b)	{
	out << b.getName() << ", bureaucrat grade " << b.getGrade() << std::endl;
	return (out);
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade You Entered Is Lower Than The Minimum!");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade You Entered Is Higher Than The Maximum!");
}