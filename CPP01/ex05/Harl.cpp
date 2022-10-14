/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 20:12:59 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/13 20:27:53 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

Harl::Harl(void)
{
	return ;
}

Harl::~Harl(void)
{
	return ;	
}

void	Harl::complain(std::string level)
{
	std::string	pick_level[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	
	for (int i = 0; i < 4; i++)
	{
		if (level == pick_level[i])
			;
	}
	
	std::cout << "Error: level not registered" << std::endl;
}

void	Harl::debug(void)
{
	std::cout <<  "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !";
	std::cout << std::endl;
}

void	Harl::info(void)
{
	std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger ! If you did, I wouldn’t be asking for more !";
	std::cout << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month.";
	std::cout << std::endl;
}

void	Harl::error(void)
{
	std::cout <<  "This is unacceptable ! I want to speak to the manager now.";
	std::cout << std::endl;
}
