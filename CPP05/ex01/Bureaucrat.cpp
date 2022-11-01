#include "Bureaucrat.hpp"


Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const &src) : _name(src._name)
{
	if (src._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (src._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = src._grade;
}


Bureaucrat::Bureaucrat(void) : _name("no name"), _grade(150)
{
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

/*----------------------------------------------------------------------------*/


Bureaucrat&		Bureaucrat::operator=(Bureaucrat const &rhs)
{
	if (rhs._grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (rhs._grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade = rhs._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Bureaucrat const & rhs)
{
	out << rhs.getName() << ", bureaucrat grade " 
		<< rhs.getGrade() << "." << std::endl;
	return (out);
}

/*----------------------------------------------------------------------------*/

std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int			Bureaucrat::getGrade(void) const
{
	return (_grade);
}

/*----------------------------------------------------------------------------*/

void	Bureaucrat::upgrade(void)
{
	if (_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	else
		_grade--;
}

void	Bureaucrat::downgrade(void)
{
	if (_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	else
		_grade++;
}

/*----------------------------------------------------------------------------*/

const char*	Bureaucrat::GradeTooHighException::what(void) const throw()
{
	return ("Bureaucrat grade is too high !");
}

const char*	Bureaucrat::GradeTooLowException::what(void) const throw()
{
	return ("Bureaucrat grade is too low !");
}

/*----------------------------------------------------------------------------*/

void	Bureaucrat::signForm(Form & form)
{
	if (form.getSigned() == true)
	{
		std::cout << "Bureaucrat " << _name << " could not sign form "
			<< form.getName() << " because it was already signed" << std::endl;
		return ;
	}
	try
	{
		form.beSigned(*this);
		std::cout << "Bureaucrat " << _name
			<< " signed form " << form.getName() << std::endl;
	}
	catch (std::exception& e)
	{
		std::cout << "Bureaucrat " << _name
			<< " could not sign form because grade is too low" << std::endl;
	}
}
