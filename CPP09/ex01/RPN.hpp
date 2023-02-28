#pragma once

# include <exception>

class WrongNumberOfArgumentsException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: wrong number of arguments");
		}
};

class WrongCharacterException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: characters allowed are '0-9' and '+-/*'");
		}
};

class InvalidExpressionException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: reverse polish notation is invalid");
		}
};
