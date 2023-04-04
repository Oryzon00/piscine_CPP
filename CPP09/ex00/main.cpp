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

void	printOutput(std::string date, double nb, map_t& dic)
{
	double	value;

	itmap_t	it = dic.find(date);
	if (it == dic.end())
	{
		it = dic.upper_bound(date);
		if (it != dic.begin())
			it--;
	}
	value = it->second;

	std::cout << date << " => " << nb << " = " << value * nb << std::endl;
}

bool	checkDate(std::string date)
{
	/* check syntax */
	for (size_t i = 0; i < date.size(); i++)
	{
		if (i != 4 && i != 7)
		{
			if (!isdigit(date[i]))
			return false;
		}
		else
		{
			if (date[i] != '-')
				return (false);
		}
	}
	/* check year */
	if (atol(date.c_str()) < 2009 || atol(date.c_str()) > 2023)
		return false;
	/* check month */
	if (atol(date.c_str() + 5) < 1 || atol(date.c_str() + 5) > 12)
		return false;
	/* check day */
	if (atol(date.c_str() + 8) < 1 || atol(date.c_str() + 8) > 31)
		return false;
	return (true);
}

bool	checkValue(std::string value)
{
	for (size_t i = 0; i < value.size(); i++)
	{
		if (!isdigit(value[i]))
			return false;
	}
	return true;
}

void	checkLine(std::string line)
{
	if (line.size() == 0)
		throw EmptyLineException();
	if (line.size() < 14)
		throw BadInputValueException(line);
	if (!checkDate(line.substr(0, 10)))
		throw BadInputValueException(line);
	if (strncmp(line.c_str() + 10, " | ", 3))
		throw BadInputValueException(line);
	if (!checkValue(line.substr(13)))
		throw BadInputValueException(line);
}

void	tokenizeLine(std::string line, map_t& dic)
{
	char*	date;
	char*	value_str;
	char*	pipe;
	double	value;

	checkLine(line);
	date = strtok(const_cast<char*>(line.c_str()), " ");		
	pipe = strtok(NULL, " "); 
	value_str = strtok(NULL, " ");
	if (!value_str)
		throw BadInputValueException(line);
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
