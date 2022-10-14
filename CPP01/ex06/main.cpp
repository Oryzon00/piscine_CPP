/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:22:28 by ajung             #+#    #+#             */
/*   Updated: 2022/10/14 17:54:02 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


int main(int ac, char **av)
{
	(void) ac;
	if (ac != 2)
	{
		std::cout << "Error: number of params" << std::endl;
		return (1);
	}
	
	
	Harl		relou;
	std::string	line = av[1];
	relou.complain(line);
	return (0);
}
