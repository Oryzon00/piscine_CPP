#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <unistd.h>
#include "Intern.hpp"

void	test1(void)
{
	std::cout << "test 1" << std::endl;
	Bureaucrat	Hugo = Bureaucrat("Hugo", 0);
}

void	test2(void)
{
	std::cout << "test 2" << std::endl;
	Bureaucrat	Yoseph = Bureaucrat("Yoseph", 151);
}

void	test3(void)
{
	std::cout << "test 3" << std::endl;
	Bureaucrat	Jean = Bureaucrat("Jean", 6);

	std::cout << Jean;
	for (int i = 0; i < 6; i++)
	{
		Jean.upgrade();
		std::cout << Jean;
	}
}

void	test4(void)
{
	std::cout << "test 4" << std::endl;
	Bureaucrat	Lea = Bureaucrat("Lea", 145);

	std::cout << Lea;
	for (int i = 0; i < 6; i++)
	{
		Lea.downgrade();
		std::cout << Lea;
	}

}

void	test5(void)
{
	std::cout << "test 5" << std::endl;
	PresidentialPardonForm	test = PresidentialPardonForm("Lea");
	Bureaucrat				bernard = Bureaucrat("Bernard", 26);
	Bureaucrat				jacques = Bureaucrat("Jacques", 25);

	std::cout << test;
	std::cout << bernard;
	std::cout << jacques;

	bernard.signForm(test);
	bernard.executeForm(test);
	jacques.signForm(test);
	jacques.executeForm(test);


}

void	test6(void)
{
	std::cout << "test 6" << std::endl;
	PresidentialPardonForm	test = PresidentialPardonForm("Lea");
	ShrubberyCreationForm	test2 = ShrubberyCreationForm("jardin");
	Bureaucrat				boss = Bureaucrat("Big Boss", 1);

	std::cout << test;
	std::cout << test2;
	std::cout << boss;

	boss.signForm(test);
	boss.executeForm(test);
	boss.signForm(test2);
	boss.executeForm(test2);
}

void	test7(void)
{
	std::cout << "test 7" << std::endl;
	Bureaucrat				frankestein = Bureaucrat("Frankestein", 1);
	RobotomyRequestForm		test = RobotomyRequestForm("Monstre de Frankestein");

	std::cout << frankestein;
	std::cout << test;

	frankestein.signForm(test);
	for (int i = 0; i < 5; i++)
	{
		frankestein.executeForm(test);
		usleep(333333);
		std::cout << std::endl;
	}
}

void	test8(void)
{
	std::cout << "test 8" << std::endl;
	Intern	stagiaire;
	Form*	test;

	test = stagiaire.makeForm("bla bla", "Lea");
	(void) test;
}

void	test9(void)
{
	std::cout << "test 9" << std::endl;
	Intern	stagiaire;
	Form*	test;

	test = stagiaire.makeForm("presidential pardon", "Lea");
	Bureaucrat bigboss = Bureaucrat("Big Boss", 1);

	std::cout << bigboss;
	std::cout << *test;

	bigboss.signForm(*test);
	bigboss.executeForm(*test);

	delete test;
}



int	main(void)
{
	try
	{
		test1();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		test2();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		test3();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		test4();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		test5();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		test6();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

	try
	{
		test7();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		test8();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	
	try
	{
		test9();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;

}
