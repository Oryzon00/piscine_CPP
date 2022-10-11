/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:51:09 by ajung             #+#    #+#             */
/*   Updated: 2022/10/11 19:16:00 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : _name(name), _weapon(NULL)
{
	return ;
}

HumanB::~HumanB(void)
{
	return ;
}

void	HumanB::setWeapon(Weapon &weapon)
{
	_weapon = &weapon;
}

void	HumanB::attack(void)
{
	if (!_weapon)
	{
		std::cout
			<< _name << " attacks with their " << "bare hands"
			<< std::endl;
	}
	else
	{
		std::cout
			<< _name << " attacks with their " << _weapon->getType()
			<< std::endl;
	}

}
