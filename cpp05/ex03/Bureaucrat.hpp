#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "AForm.hpp"

class AForm;

class	Bureaucrat{
	const std::string	_name;
	int			grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat& obj);
		Bureaucrat& operator=(Bureaucrat& obj);
		~Bureaucrat();
		std::string	getName() const;
		int	getGrade() const;
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
		void	signForm(AForm &form);
		void	executeForm(AForm const &form);
};
std::ostream&	operator<<(std::ostream & out, Bureaucrat & b);

#endif