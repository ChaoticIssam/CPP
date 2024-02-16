#ifndef AFORM_HPP
#define AFORM_HPP

#include <iostream>
#include "Bureaucrat.hpp"

class	Bureaucrat;

class AForm{
    const std::string _name;
    bool		_signed;
	const int			_gradeSign;
	const int			_gradeExec;
	public:
		AForm();
		AForm(std::string name, bool signd, int gradeSign, int gradeExec);
		AForm(AForm& obj);
		AForm&	operator=(AForm& obj);
		~AForm();
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
		virtual void	execute(Bureaucrat const & executor) = 0;
};
std::ostream &	operator<<(std::ostream & out, AForm & obj);

#endif