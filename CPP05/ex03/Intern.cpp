
#include "Intern.hpp"

Intern::Intern(void)
{
	return ;
}

Intern::Intern(Intern const &src)
{
	(void) src;
	return ;
}

Intern::~Intern(void)
{
	return ;
}

Intern&	Intern::operator=(Intern const &rhs)
{
	(void) rhs;
	return (*this);
}

/*----------------------------------------------------------------------------*/

const char* Intern::FormTypeDoNotExist::what(void) const throw()
{
	return ("Form type do not exist.");
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	std::string tab_str[3] =
		{"robotomy request", "presidential pardon", "shrubbery creation"};
	int	i = 0;
	while (tab_str[i] != name && i < 3)
		i++;
	if (i >= 3)
		throw Intern::FormTypeDoNotExist();
	else
	{
		std::cout << "Intern creates form " << name << std::endl;
		switch (i)
		{
			case 0:
				return (new RobotomyRequestForm(target));
			case 1:
				return (new PresidentialPardonForm(target));
			case 2:
				return (new ShrubberyCreationForm(target));
			default:
				break;
		}
	}
	return (NULL);
}
