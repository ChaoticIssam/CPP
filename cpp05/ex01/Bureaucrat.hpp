#ifndef	BUREAUCRAT_HPP
#define	BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class	Bureaucrat{
<<<<<<< HEAD
	const std::string	_name;
=======
	std::string	name;
>>>>>>> b77d12f1a4bac5578e8b021f8de8dc20acce85da
	int			grade;
	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat& obj);
		Bureaucrat& operator=(Bureaucrat& obj);
		~Bureaucrat();
<<<<<<< HEAD
		const std::string	getName();
=======
		std::string	getName();
>>>>>>> b77d12f1a4bac5578e8b021f8de8dc20acce85da
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