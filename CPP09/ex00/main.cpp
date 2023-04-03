#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
#include <utility>

/* --------------------------------------------------------------------------------------------- */
void	parseDatabase(map_t& dic)
{
	(void) dic;
	std::ifstream	data("data.csv");
	std::string		line;
	char			*date;
	char			*value;

	if(!data.is_open())
		throw FileNotOpenException();
	getline(data, line);
	if (line != "date,exchange_rate")
		throw FormatErrorDatabaseException();
	while (getline(data, line))
	{
		date = strtok(const_cast<char*>(line.c_str()), ",");
		value = strtok(NULL, ",");
		if (!date || !value)
			throw FormatErrorDatabaseException();
		dic.insert(std::pair<std::string, double>(std::string(date), atof(value)));
	}
	data.close();
	// for(itmap_t	it = dic.begin(); it != dic.end(); it++)
	// 	std::cout << it->first << "," << it->second << std::endl;

}

/* --------------------------------------------------------------------------------------------- */

void	checkNbArgs(int ac)
{
	if (ac != 2)
		throw WrongNumberOfArgumentsException();
}

/* --------------------------------------------------------------------------------------------- */

void	printOutput(std::string date, double value, map_t& dic)
{
	//utiliser at?
	//call upp/lowerband for last value
	std::cout << date << " => " << value << " = " << dic[date] << std::endl;
}

void	tokenizeLine(std::string line, map_t& dic)
{
	std::cout << "------ " <<  line << " ------" << std::endl;

	char*	date;
	char*	value_str;
	double	value;

	date = strtok(const_cast<char*>(line.c_str()), " ");
	if (!date)
		throw BadInputDateException();
	strtok(NULL, " ");
	value_str = strtok(NULL, " ");
	if (!value_str)
		throw BadInputValueException("date");
	value = std::atof(value_str);
	if (value < 0)
		throw NotAPositiveNumberException();
	if (value > 1000)
		throw ErrorTooLargeNumberException();
	printOutput(std::string(date), value, dic);
}

void	parseInputFile(map_t& dic, char** av)
{
	std::ifstream	inputFile(av[1]);
	std::string		line;

	if (!inputFile.is_open())
		throw FileNotOpenException();
	getline(inputFile, line);
	if (line.compare("date | value") != 0)
		throw FormatErrorException();

	while (getline(inputFile, line))
	{
		try
		{
			tokenizeLine(line, dic);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
	inputFile.close();
}

/* --------------------------------------------------------------------------------------------- */

int	main(int ac, char** av)
{
	map_t	dic;
	try
	{
		checkNbArgs(ac);
		parseDatabase(dic);
		parseInputFile(dic, av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	return 0;
}
