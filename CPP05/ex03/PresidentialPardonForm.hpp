#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"

class PresidentialPardonForm : public Form
{
	public:
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const &src);
		~PresidentialPardonForm(void);

		PresidentialPardonForm&	operator=(PresidentialPardonForm const &rhs);

	private:
		PresidentialPardonForm(void);
		void		executeAction(void) const;
		std::string const	_target;

	protected:
		
};

/*----------------------------------------------------------------------------*/
