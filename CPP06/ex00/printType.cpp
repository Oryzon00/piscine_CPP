#include "header.hpp"

void	printChar(std::string str)
{
	char toPrint = str[1];
	if (isprint(toPrint) == true)
		std::cout << "char: '" << toPrint << "'" << std::endl;

	else
		std::cout << "char: non printable" << std::endl;
	std::cout <<
		"int: " << static_cast<int>(toPrint) << std::endl <<
		"float: " << static_cast<float>(toPrint) << ".0f" << std::endl <<
		"double: " << static_cast<double>(toPrint) << ".0" << std::endl;
}

void	printInt(std::string str)
{
	long long test = atoll(str.c_str());

	if (test > INT_MAX || test < INT_MIN)
	{
		std::cout <<
			"char: " << "Impossible" << std::endl <<
			"int: " << "Overflow" << std::endl <<
			"float: " << "Impossible" << std::endl <<
			"double: " << "Impossible" << std::endl;
		return ;
	}

	int nb = atoi(str.c_str());

	if (nb > 255 || nb < 0 || isprint(static_cast<char>(nb)) == false)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;
		
	std::cout <<
		"int: " << nb << std::endl <<
		"float: " << static_cast<float>(nb) << ".0f" << std::endl <<
		"double: " << static_cast<double>(nb) << ".0" << std::endl;
}

void	printFloat(std::string str)
{
	double test = atof(str.c_str());
	if (test > FLT_MAX || test < -FLT_MAX)
	{
		std::cout <<
			"char: " << "Impossible" << std::endl <<
			"int: " << "Impossible" << std::endl <<
			"float: " << "Overflow" << std::endl <<
			"double: " << "Impossible" << std::endl;
		return ;
	}
		
	float nb = static_cast<float>(atof(str.c_str()));

	if (nb > 255 || nb < 0 || isprint(static_cast<char>(nb)) == false)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;

	if (nb > INT_MAX || nb < INT_MIN)
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;

	std::cout <<
		"float: " << nb << "f" << std::endl <<
		"double: " << static_cast<double>(nb) << std::endl;
}

void	printDouble(std::string str)
{
	double nb = atof(str.c_str());

	if (nb > 255 || nb < 0 || isprint(static_cast<char>(nb)) == false)
		std::cout << "char: non printable" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(nb) << "'" << std::endl;

	if (nb > INT_MAX || nb < INT_MIN)
		std::cout << "int : Impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(nb) << std::endl;

	if (nb > FLT_MAX || nb < -FLT_MAX)
		std::cout << "float: Impossible" << std::endl;
	else
		std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;

	std::cout << "double: " << nb << std::endl;
}

void	printSpecialInvalid(void)
{
	std::cout <<
		"char: " << "Invalid" << std::endl <<
		"int: " << "Invalid" << std::endl <<
		"float: " << "Invalid" << std::endl <<
		"double: " << "Invalid" << std::endl;
}

void	printSpecialFloat(std::string str)
{
	std::cout <<
		"char: " << "impossible" << std::endl <<
		"int: " << "impossible" << std::endl <<
		"float: " << str << std::endl <<
		"double: " << str.substr(0, str.length() - 1) << std::endl;
}

void	printSpecialDouble(std::string str)
{
	std::cout <<
		"char: " << "impossible" << std::endl <<
		"int: " << "impossible" << std::endl <<
		"float: " << str + "f" << std::endl <<
		"double: " << str << std::endl;
}
