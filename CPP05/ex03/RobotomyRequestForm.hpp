#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <stdlib.h>

class RobotomyRequestForm : public Form
{
	public:
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const &src);
		~RobotomyRequestForm(void);

		RobotomyRequestForm&	operator=(RobotomyRequestForm const &rhs);

	private:
		RobotomyRequestForm(void);
		std::string const	_target;
		void		executeAction(void) const;

	protected:
		
};

/*----------------------------------------------------------------------------*/
