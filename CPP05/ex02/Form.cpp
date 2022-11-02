#include "Form.hpp"

Form::Form(std::string name, int gradeToSign, int gradeToExecute)
	: _name(name), _signed(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException();
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException();
}

Form::Form(void) 
	: _name("no name"), _signed(false), _gradeToSign(150), _gradeToExecute(150)
{
	return ;
}

Form::Form(Form const &src)
	:  _name(src._name), _signed(src._signed), _gradeToSign(src._gradeToSign),
		_gradeToExecute(src._gradeToExecute)

{
	return ;
}

Form::~Form(void)
{
	return ;
}

/*----------------------------------------------------------------------------*/

Form&	Form::operator=(Form const &rhs)
{
	_signed = rhs._signed;
	return (*this);
}

std::ostream&	operator<<(std::ostream& out, Form const & rhs)
{
	out << "Form : " << rhs.getName()
		<< ", grade to sign: " << rhs.getGradeToSign()
		<< ", grade to execute: " << rhs.getGradeToExecute();
	if (rhs.getSigned() == true)
		out << ", is signed." << std::endl;
	else
		out << ", is not signed." << std::endl;
	return (out);
}

/*----------------------------------------------------------------------------*/

std::string Form::getName(void) const
{
	return (_name);
}

int			Form::getSigned(void) const
{
	return (_signed);
}

int			Form::getGradeToSign(void) const
{
	return (_gradeToSign);
}

int			Form::getGradeToExecute(void) const
{
	return (_gradeToExecute);
}

/*----------------------------------------------------------------------------*/

const char*	Form::GradeTooHighException::what(void) const throw()
{
	return ("Grade is too high for the form!");
}

const char*	Form::GradeTooLowException::what(void) const throw()
{
	return ("Grade is too low for the form!");
}

const char*	Form::FormIsNotSigned::what(void) const throw()
{
	return ("Form is not signed !");
}

/*----------------------------------------------------------------------------*/

void	Form::beSigned(Bureaucrat & bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
		throw Form::GradeTooLowException();
	else
		_signed = true;

}
/*----------------------------------------------------------------------------*/

void	Form::execute(Bureaucrat const & executor) const
{
	if (_signed == false)
		throw Form::FormIsNotSigned();
	else if (executor.getGrade() > this->_gradeToExecute)
		throw Form::GradeTooLowException();
	else
		this->executeAction();
}
