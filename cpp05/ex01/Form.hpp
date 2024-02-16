#ifndef	FORM_HPP
#define	FORM_HPP

#pragma once
#include <iostream>
#include <exception>
#include "Bureaucrat.hpp"

class Bureaucrat;

class	Form{
<<<<<<< HEAD
	const std::string _name;
	bool				_signed;
	const int			_gradeSign;
	const int			_gradeExec;
=======
	std::string _name;
	bool				_signed;
	int			_gradeSign;
	int			_gradeExec;
>>>>>>> b77d12f1a4bac5578e8b021f8de8dc20acce85da
	public:
		Form();
		Form(std::string name, int gradeSign, int gradeExec);
		Form(Form& obj);
		Form& operator=(Form& obj);
		~Form();
		std::string	getName()const;
		int	getGradeExec()const;
		int	getGradeSign()const;
		bool	getSign()const;
		void	beSigned(Bureaucrat &Bureau);
		class GradeTooLowException : public std::exception {
			public:
				const char* what() const throw();
		};
		class GradeTooHighException : public std::exception {
			public:
				const char* what() const throw();
		};
};
std::ostream &	operator<<(std::ostream & out, Form & obj);

#endif