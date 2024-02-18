#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("DEFAULT"), grade(150){
	// std::cout << "Bureaucrat's default constructor has been called." << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name){
	// std::cout << "Bureaucrat's parametrized constructor has been called." << std::endl;
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat& obj) : _name(obj._name){
	// std::cout << "Bureaucrat's copy constructor has been called." << std::endl;
	*this = obj;
}

Bureaucrat&	Bureaucrat::operator=(Bureaucrat& obj){
	// std::cout << "Bureaucrat's copy assignement operator overload has been called." << std::endl;
	this->grade = obj.grade;
	return (*this);
}

std::string	Bureaucrat::getName() const{
	return _name;
}

int	Bureaucrat::getGrade() const{
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
	// std::cout << "Bureaucrat's destructor has been called." << std::endl;
}

void Bureaucrat::signForm(AForm &form) {
  try {
    form.beSigned(*this);
    std::cout << this->_name << " signed " << form.getName() << std::endl;
  }
  catch (std::exception &e){
    std::cout << this->_name << " couldn't sign " << form.getName()
              << " because " << e.what() << std::endl;
  }
}

void	Bureaucrat::executeForm(AForm const &form){
  try {
    form.execute(*this);
  } catch (std::exception &e) {
    std::cout << this->_name << " cannot execute " << form.getName()
              << " because " << e.what() << std::endl;
  }
}

const char	*Bureaucrat::GradeTooLowException::what() const throw(){
	return ("Grade You Entered Is Lower Than The Minimum!");
}

const char	*Bureaucrat::GradeTooHighException::what() const throw(){
	return ("Grade You Entered Is Higher Than The Maximum!");
}