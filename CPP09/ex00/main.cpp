#include "BitcoinExchange.hpp"
#include <iostream>
#include <cstdlib>
#include <fstream>
#include <cstring>
//database file name: database.csv

void	checkNbArgs(int ac)
{
	if (ac != 2)
		throw WrongNumberOfArgumentsException();
}

void	parseDatabase(map_t& valueBC, char** av)
{
	(void) valueBC;
	(void) av;
}

void	printOutput(std::string date, float value, map_t& dic)
{
	std::cout << "date: " << date << " | nb BC: " << value << std::endl;
	(void) dic;
}

void	tokenizeLine(std::string line, map_t& dic)
{
	std::cout << "------ " <<  line << " ------" << std::endl;

	char*	date;
	char*	value_str;
	float	value;

	date = strtok(const_cast<char*>(line.c_str()), " ");
	if (!date)
		throw BadInputDateException();
	strtok(NULL, " ");
	value_str = strtok(NULL, " ");
	if (!value_str)
		throw BadInputValueException(date);
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

int	main(int ac, char** av)
{
	map_t	dic;
	try
	{
		checkNbArgs(ac);
		parseDatabase(dic, av);
		parseInputFile(dic, av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	return 0;
}
