# pragma once

# include <exception>
# include <map>
# include <string>

typedef	std::map<std::string, float>			map_t;
typedef	std::map<std::string, float>::iterator	itmap_t;

class FileNotOpenException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: could not open file.");
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

class BadInputDateException : public std::exception
{
	public:
		virtual const char*	what(void) const throw()
		{
			return ("Error: bad input date");
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
		BadInputValueException(const std::string date)
			: _msg(std::string("Error: bad input => ") + date)	{}
		// BadInputValueException(void)
		// {
		// 	_msg = "test";
		// }
		~BadInputValueException() throw()	{}

		virtual const char*	what(void) const throw()
		{
			return _msg.c_str();
		}
};
