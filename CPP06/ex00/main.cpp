#include "header.hpp"



//char --> 'a'
//int --> 0, -42, 42
//float --> 0.0f, -42.0f, 42.0f
//double --> 0.0, -42.0, 42.0



void	detectType(std::string str)
{
	if (detectChar(str) == true)
		printChar(str);
	else if (detectInt(str) == true)
		printInt(str);
	else if (detectFloat(str) == true)
		printFloat(str);
	else if (detectDouble(str) == true)
		printDouble(str);
	else if (detectSpecialFloat(str) == true)
		printSpecialFloat(str);
	else if (detectSpecialDouble(str) == true)
		printSpecialDouble(str);
	else
		printSpecialInvalid();
}

int	main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: number of arguments" << std::endl;
		return (1);
	}
	else
	{
		std::string str = std::string(av[1]);
		detectType(str);
	}
	return (0);


}
