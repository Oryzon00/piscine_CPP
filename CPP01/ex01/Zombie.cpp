/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:02:20 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/10 19:14:52 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::Zombie(void) : _name("")
{
	return ;
}

Zombie::~Zombie(void)
{
	std::cout << _name << " has returned to the grave" << std::endl;
	return ;
}

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::set_name(std::string name)
{
	this->_name = name;
	return ;
}
