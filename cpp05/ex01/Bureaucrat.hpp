#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class	Bureaucrat{
	std::string	name;
	int			grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat& obj);
		Bureaucrat& operator=(Bureaucrat& obj);
		~Bureaucrat();
		std::string	getName();
		int	getGrade();
		void	incrementGrade(void);
		void	decrementGrade(void);
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
		void	signForm(Form &form);
};
std::ostream&	operator<<(std::ostream & out, Bureaucrat & b);

#endif