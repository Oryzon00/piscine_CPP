#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
	: Form("RobotomyRequestForm", 72, 45), _target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(void)
	: Form("RobotomyRequestForm", 72, 45), _target("no target")
{
	
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &src)
	: Form("RobotomyRequestForm", 72, 45), _target(src._target)
{
	
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void) rhs;
	return (*this);
}

/*----------------------------------------------------------------------------*/

void	RobotomyRequestForm::executeAction(void) const
{
	std::cout << "* bzzzzZZZZZHZHZHZHZHZHZ *" << std::endl;
	srand(time(0));
	if ((rand() % 2) == 0)
		std::cout << "Operation success ! " << _target << " was robotomized"
			<< std::endl;
	else
		std::cout << "Operation failure !" << std::endl;
}
