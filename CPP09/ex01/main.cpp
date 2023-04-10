#include "RPN.hpp"
#include <iostream>
#include <string>
#include <stack>
#include <cstdlib>
#include <list>

void	parsing(int ac, char** av)
{
	if (ac != 2)
		throw WrongNumberOfArgumentsException();

	std::string	str(av[1]);
	if (str.find_first_not_of("0123456789 +-*/") != std::string::npos)
		throw WrongCharacterException();
}

void	opDivide(std::stack< int, std::list<int> >& pile)
{
	if (pile.size() < 2)
		throw InvalidExpressionException();

	int a = pile.top();
	pile.pop();
	int b = pile.top();
	pile.pop();
	pile.push(b / a);
}

void	opMultiply(std::stack< int, std::list<int> >& pile)
{
	if (pile.size() < 2)
		throw InvalidExpressionException();

	int a = pile.top();
	pile.pop();
	int b = pile.top();
	pile.pop();
	pile.push(a * b);
}

void	opMinus(std::stack< int, std::list<int> >& pile)
{
	if (pile.size() < 2)
		throw InvalidExpressionException();

	int a = pile.top();
	pile.pop();
	int b = pile.top();
	pile.pop();
	pile.push(b - a);
}

void	opPlus(std::stack< int, std::list<int> >& pile)
{
	if (pile.size() < 2)
		throw InvalidExpressionException();

	int a = pile.top();
	pile.pop();
	int b = pile.top();
	pile.pop();
	pile.push(a + b);
}

void	solve_RPN(char** av)
{
	std::string		str(av[1]);
	std::string		num("0123456789");
	std::stack< int, std::list<int> >	pile; //preciser le container
	
	for(std::string::iterator it = str.begin(); it != str.end(); it++)
	{
		char c = *it;
		if (num.find(c) != std::string::npos)
			pile.push(atoi(&c)); //probleme ici
		else if (c == '+')
			opPlus(pile);
		else if (c == '-')
			opMinus(pile);
		else if (c == '*')
			opMultiply(pile);
		else if (c == '/')
			opDivide(pile);
	}
	if (pile.size() != 1)
		throw InvalidExpressionException();
	std::cout << pile.top() << std::endl;
}

int	main(int ac, char** av)
{
	try
	{
		parsing(ac, av);
		solve_RPN(av);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	return 0;
}
