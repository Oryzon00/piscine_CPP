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

void	parseValueBC(map_t& valueBC, char** av)
{
	(void) valueBC;
	(void) av;
}

void	printOutput(std::string line, map_t& dic)
{
	std::cout << line << std::endl;

	std::string date;
	char*		value_str;
	float		value;

	date = strtok(const_cast<char*>(line.c_str()), " ");
	strtok(NULL, " ");
	value_str = strtok(NULL, " ");
	if (!value_str)
		std::cerr << "Error: bad input => " << date << std::endl << std::endl;
	else
	{
		value = std::atof(value_str);
		if (value < 0)
			std::cerr << "Error: not a positive number => " << date << std::endl << std::endl;
		else if (value > 1000)
			std::cerr << "Error: number is above 1000 => " << date << std::endl << std::endl;
		else 
			std::cout << "date: " << date << " | value: " << value << std::endl << std::endl;
	} 
	(void) dic;
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
		printOutput(line, dic);
	inputFile.close();
}
//seulement remplir une map avec le fichier .csv
//puis parser ligne par ligne input.txt
//chaque ligne: find key(date), find nbBitcoin, ecrire erreur s'il y en a

int	main(int ac, char** av)
{
	map_t	dic;
	try
	{
		checkNbArgs(ac);
		parseInputFile(dic, av);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
		return 1;
	}
	(void) av;
	return 0;
}
