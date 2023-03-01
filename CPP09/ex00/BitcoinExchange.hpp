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
			return ("Error: could not open file");
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
			return ("Error: format error in file");
		}
};
