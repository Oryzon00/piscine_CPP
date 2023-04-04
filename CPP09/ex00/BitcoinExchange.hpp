# pragma once

# include <exception>
# include <map>
# include <string>

typedef	std::map<std::string, double>			map_t;
typedef	std::map<std::string, double>::iterator	itmap_t;

class FileNotOpenException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: could not open file.");
		}
};

class FormatErrorDatabaseException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: format error in database.");
		}
};

class WrongNumberOfArgumentsException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: wrong number of arguments");
		}
};

class FormatErrorException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: format error in file => 'date | value'");
		}
};

class EmptyLineException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: empty line");
		}
};



class NotAPositiveNumberException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: not a positive number.");
		}
};

class ErrorTooLargeNumberException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: too large a number.");
		}
};

class BadInputValueException : public std::exception
{
	std::string	_msg;

	public:
		BadInputValueException(const std::string str)
			: _msg(std::string("Error: bad input => ") + str)	{}
		~BadInputValueException() throw()	{}

		virtual const char*	what(void) const throw()
		{
			return _msg.c_str();
		}
};
