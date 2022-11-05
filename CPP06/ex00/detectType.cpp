
#include "header.hpp"

bool	detectChar(std::string str)
{
	if (str.length() == 3
		&& str.at(0) == '\''
		&& str.at(2) == '\'')
		return (true);
	else
		return(false);
}

bool	strIsDigit(std::string str)
{
	return (str.find_first_not_of("0123456789") == std::string::npos);
}

bool	detectInt(std::string str)
{
	if (str.at(0) == '-' && str.length() == 1)
		return (false);
	else if (str.at(0) == '-' && str.length() > 1)
		str = std::string(str, 1, std::string::npos);
	if (strIsDigit(str) == true)
		return (true);
	else
		return (false);
	
}

bool	detectFloat(std::string str)
{
	if (str.at(0) == '-' && str.length() == 1)
		return (false);
	else if (str.at(0) == '-' && str.length() > 1)
		str = std::string(str, 1, std::string::npos);
	if (str.find_first_of("f") != str.length() - 1)
		return (false);
	if (str.find_first_of(".") == str.length() - 2)
		return (false);
	int pts = 0;
	for (size_t i = 0; i < str.length() - 1; i++)
	{
		if (str[i] == '.')
			pts++;
		else if (std::isdigit(str[i]) != true)
			return (false);
	}
	if (pts == 1)
		return (true);
	else
		return (false);
	
}

bool	detectDouble(std::string str)
{
	if (str.at(0) == '-' && str.length() == 1)
		return (false);
	else if (str.at(0) == '-' && str.length() > 1)
		str = std::string(str, 1, std::string::npos);
	if (str.find_first_of(".") == str.length() - 1)
		return (false);
	int pts = 0;
	for (size_t i = 0; i < str.length(); i++)
	{
		if (str[i] == '.')
			pts++;
		else if (std::isdigit(str[i]) != true)
			return (false);
	}
	if (pts == 1)
		return (true);
	else
		return (false);
}

bool	detectSpecialFloat(std::string str)
{
	if (
		str.compare("-inff") == 0
		|| str.compare("+inff") == 0
		|| str.compare("nanf") == 0
		)
		return (true);
	else
		return (false);
}

bool	detectSpecialDouble(std::string str)
{
	if (
		str.compare("-inf") == 0
		|| str.compare("+inf") == 0
		|| str.compare("nan") == 0
		)
		return (true);
	else
		return (false);
}
