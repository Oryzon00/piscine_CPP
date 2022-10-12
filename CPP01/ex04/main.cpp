/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 14:23:11 by ajung             #+#    #+#             */
/*   Updated: 2022/10/12 19:32:25 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <fstream>
#include <iostream>
#include <stdbool.h>
#include <stdlib.h>

#define ERROR 1
#define SUCCESS 0


void	replace(std::ifstream& infile, std::ofstream &outfile,
	std::string	&toFind, std::string &toReplace)
{
	std::string line;

	while (!infile.eof())
	{
		std::getline(infile, line);
		size_t	i = line.find(toFind, 0);
		while (i != line.npos)
		{
			line.erase(i, toFind.length());
			line.insert(i, toReplace);
			i = line.find(toFind, i + toReplace.length());
		}
		outfile << line;
		outfile << std::endl;
	}
	
}

int	main(int ac, char **av)
{
	(void) ac;
	std::string	filename = av[1];
	std::string	toFind = av[2];
	std::string	toReplace = av[3];
	std::string	line;

	std::ifstream	infile;
	std::ofstream	outfile;

	infile.open(filename.c_str());
	if (infile.fail() == true)
	{
		std::cerr << "Error: open file" << std::endl;
		exit(ERROR);
	}
	
	std::string	outfile_name = filename + ".replace";
	outfile.open(outfile_name.c_str());
	if (outfile.fail() == true)
	{
		std::cerr << "Error: open file" << std::endl;
		infile.close();
		exit(ERROR);
	}
	
	replace(infile, outfile, toFind, toReplace);

	infile.close();
	outfile.close();
	return (SUCCESS);
}
