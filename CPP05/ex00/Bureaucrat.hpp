#pragma once

#include <string> 

class Bureaucrat
{
	public:
		Bureaucrat(void);
		Bureaucrat(std::string _name, int grade);
		Bureaucrat(Bureaucrat const &src);
		~Bureaucrat(void);

		Bureaucrat&	operator=(Bureaucrat const &rhs);

	private:
		std::string const	_name;
		int					_grade;

	protected:
		
};

/*----------------------------------------------------------------------------*/
