#include "PresidentialPardonForm.hpp"


PresidentialPardonForm::PresidentialPardonForm(std::string target)
	: Form("PresidentialPardonForm", 25, 5), _target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(void)
	: Form("PresidentialPardonForm", 25, 5), _target("no target")
{
	
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src)
	: Form("PresidentialPardonForm", 25, 5), _target(src._target)
{
	
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(PresidentialPardonForm const &rhs)
{
	(void) rhs;
	return (*this);
}

/*----------------------------------------------------------------------------*/

void	PresidentialPardonForm::executeAction(void) const
{
	std::cout << _target << " was forgiven by Zaphod Beeblebrox !" << std::endl;
}
