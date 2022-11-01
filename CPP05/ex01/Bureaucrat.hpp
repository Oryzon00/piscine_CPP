
#pragma once

#include <string> 
#include <iostream>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public:
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		Bureaucrat&		operator=(Bureaucrat const &src);
		
		std::string	getName(void) const;
		int			getGrade(void) const;

		void		upgrade(void);
		void		downgrade(void);
		void		signForm(Form & form);

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};


	private:
		std::string const	_name;
		int					_grade; // 150 -> 1
		Bureaucrat(void);

	protected:
		
};

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & rhs);


/*----------------------------------------------------------------------------*/
