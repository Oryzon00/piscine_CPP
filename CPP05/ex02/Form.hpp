#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public:
		Form(std::string name, int gradeToSign, int gradeToExecute);
		Form(Form const &src);
		virtual ~Form(void);

		Form&	operator=(Form const &rhs);

		std::string	getName(void) const;
		int			getSigned(void) const;
		int			getGradeToSign(void) const;
		int			getGradeToExecute(void) const;

		virtual void		beSigned(Bureaucrat& bureaucrat);
		void				execute(Bureaucrat const & executor) const;


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

		class FormIsNotSigned : public std::exception
		{
			public:
				virtual const char*	what(void) const throw();
		};

	private:
		std::string const	_name;
		bool				_signed;
		int	const			_gradeToSign;
		int	const			_gradeToExecute;
		Form(void);
		virtual	void	executeAction(void) const = 0;

	protected:
		
};

std::ostream&	operator<<(std::ostream& out, Form const & rhs);

/*----------------------------------------------------------------------------*/
