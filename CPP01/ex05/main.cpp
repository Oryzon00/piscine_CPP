/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 19:22:28 by ajung             #+#    #+#             */
/*   Updated: 2022/10/14 17:49:41 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>


int main(void)
{
	Harl		relou;
	std::string	line;

	std::cout << "Type INFO, DEBUG, WARNING or ERROR to communicate with Harl"  <<std::endl;
	std::getline(std::cin, line);
	relou.complain(line);
	return (0);
}
