/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:26:40 by ajung             #+#    #+#             */
/*   Updated: 2022/10/10 20:58:47 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string&	stringREF = str;

	std::cout <<
		"adresse de la string: " << &str << std::endl <<
		"adresse stockee dans stringPTR: " << stringPTR << std::endl <<
		"adresse stockee dans stringREF: " << &stringREF << std::endl << std::endl <<
		"valeur de str: " << str << std::endl <<
		"valeur pointe par stringPTR: " << *stringPTR << std::endl <<
		"valeur pointe par stringREF: " << stringREF << std::endl;

	return (0);		
}
