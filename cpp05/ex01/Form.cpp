#include "Form.hpp"

Form::Form() : _name("DEFAULT"), _gradeSign(1), _gradeExec(1){
	std::cout << "Form's default constructor has been called." << std::endl;
	_signed = false;
}

Form::Form(std::string name, int gradeSign, int gradeExec) : _name(name), _gradeSign(gradeSign), _gradeExec(gradeExec){
	std::cout << "Form's parametrized constructor has been called." << std::endl;
	if (_gradeExec < 1 || _gradeSign < 1)
		throw GradeTooHighException();
	else if (_gradeExec > 150 || _gradeSign > 150)
		throw GradeTooLowException();
}

Form::Form(Form& obj) : _name(obj._name), _signed(obj._signed), 
	_gradeSign(obj._gradeSign), _gradeExec(obj._gradeExec){
	std::cout << "Form's copy constructor has been called." << std::endl;
	*this = obj;
}

Form&	Form::operator=(Form& obj){
	std::cout << "Form's copy assignement operator overload has been called." << std::endl;
	(void)obj;
	return (*this);
}

std::string	Form::getName()const{
	return _name;
}

int	Form::getGradeExec()const{
	return _gradeExec;
}

int	Form::getGradeSign()const{
	return _gradeSign;
}

bool	Form::getSign()const{
	return (_signed);
}

Form::~Form(){
	std::cout << "Form's destructor has been called." << std::endl;
}

void Form::beSigned(Bureaucrat &Bureau) {
  if (this->_gradeSign >= Bureau.getGrade())
    this->_signed = true;
  else
    throw(GradeTooLowException());
}

std::ostream &	operator<<(std::ostream & out, Form & obj){
	out << "Form: " << obj.getName()
         << " ,grade to be executed: " << obj.getGradeExec()
         << " ,grade to be signed: " << obj.getGradeSign();
	if (obj.getSign())
   		out << " , and it's signed.";
 	else
    	out << " , and it's not signed yet.";
	return (out);
}

const char	*Form::GradeTooLowException::what() const throw(){
	return ("Grade You Entered Is Lower Than The Minimum!");
}

const char	*Form::GradeTooHighException::what() const throw(){
	return ("Grade You Entered Is Higher Than The Maximum!");
}