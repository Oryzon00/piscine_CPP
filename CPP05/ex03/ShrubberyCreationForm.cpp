#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
	: Form("ShrubberyCreationForm", 145, 137), _target(target)
{

}
ShrubberyCreationForm::ShrubberyCreationForm(void)
	: Form("ShrubberyCreationForm", 145, 137), _target("no target")
{
	
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &src)
	: Form("ShrubberyCreationForm", 145, 137), _target(src._target)
{
	
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void) rhs;
	return (*this);
}

/*----------------------------------------------------------------------------*/

void	ShrubberyCreationForm::executeAction(void) const
{
	std::string		outfile_name = _target + "_shrubbery";
	std::ofstream	outfile;

	outfile.open(outfile_name.c_str());
	if (outfile.fail() == true)
	{
		std::cerr << "Error: open file" << std::endl;
		return ;
	}

	outfile << TREE;

}
