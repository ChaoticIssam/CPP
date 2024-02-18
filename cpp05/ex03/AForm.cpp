#include "AForm.hpp"

AForm::AForm() : _name("DEFAULT"), _gradeSign(1), _gradeExec(1){
	_signed = false;
    // std::cout << "AForm's constructor has been called." << std::endl;
}
AForm::AForm(std::string name, int gradeSign, int gradeExec) : _name(name), _signed(false), _gradeSign(gradeSign), _gradeExec(gradeExec){
    // std::cout << "AForm's parametrized constructor has been called." << std::endl;
	if (gradeExec < 1 || gradeSign < 1)
		throw GradeTooHighException();
	else if (gradeExec > 150 || gradeSign > 150)
		throw GradeTooLowException();
}
AForm::AForm(AForm& obj) : _name(obj._name), _signed(obj._signed), 
	_gradeSign(obj._gradeSign), _gradeExec(obj._gradeExec){
    // std::cout << "AForm's copy constructor has been called." << std::endl;
}
AForm&	AForm::operator=(AForm& obj){
    // std::cout << "AForm's copy assignement operator overload has been called." << std::endl;
    (this != &obj) && (this->_signed = obj._signed);
    return (*this);
}

std::string	AForm::getName()const{
	return _name;
}

int	AForm::getGradeExec()const{
	return _gradeExec;
}

int	AForm::getGradeSign()const{
	return _gradeSign;
}

bool	AForm::getSign()const{
	return (_signed);
}

void AForm::beSigned(Bureaucrat &Bureau) {
  if (this->_gradeSign >= Bureau.getGrade())
    this->_signed = true;
  else
    throw(GradeTooLowException());
}

AForm::~AForm(){
    // std::cout << "AForm's destructor has been called." << std::endl;
}

std::ostream &	operator<<(std::ostream & out, AForm & obj){
	out << "AForm: " << obj.getName()
         << " ,grade to be executed: " << obj.getGradeExec()
         << " ,grade to be signed: " << obj.getGradeSign();
	if (obj.getSign())
   		out << " , and it's signed.";
 	else
    	out << " , and it's not signed yet.";
	return (out);
}

void	AForm::execute(Bureaucrat const & executor) const{(void)executor;}

const char	*AForm::GradeTooLowException::what() const throw(){
	return ("Grade You Entered Is Lower Than The Minimum!");
}

const char	*AForm::GradeTooHighException::what() const throw(){
	return ("Grade You Entered Is Higher Than The Maximum!");
}