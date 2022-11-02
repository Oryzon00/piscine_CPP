#pragma once

#include <string>
#include <iostream>

#include "Form.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"


class Intern
{
	public:
		Intern(void);
		Intern(Intern const &src);
		~Intern(void);

		Intern&	operator=(Intern const &rhs);

		Form*	makeForm(std::string name, std::string target);

		class FormTypeDoNotExist : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	private:
		

	protected:
		
};

/*----------------------------------------------------------------------------*/
