#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"
#include "Bureaucrat.hpp"
#include <fstream>

#define TREE "\
		 /\\\n\
        /  \\\n\
       /    \\\n\
      / +    \\\n\
     /     ¤  \\\n\
    /__     *__\\\n\
      /  +   \\\n\
     / *      \\\n\
    /     *    \\\n\
   /  +    ¤    \\\n\
  /___        ___\\\n\
     /     *  \\\n\
    /  *       \\\n\
   /         +  \\\n\
  / +            \\\n\
 /         *      \\\n\
/__________________\\\n\
        |  |\n\
        |  |\n\
        |  |\n\
        ====\n"

class ShrubberyCreationForm : public Form
{
	public:
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const &src);
		~ShrubberyCreationForm(void);

		ShrubberyCreationForm&	operator=(ShrubberyCreationForm const &rhs);

	private:
		ShrubberyCreationForm(void);
		std::string const	_target;
		void	executeAction(void) const;

	protected:
		
};

/*----------------------------------------------------------------------------*/
