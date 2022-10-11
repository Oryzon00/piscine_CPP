/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:07:21 by ajung             #+#    #+#             */
/*   Updated: 2022/10/11 19:02:36 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(void) : _type("")
{
	return ;
}

Weapon::Weapon(std::string type) : _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string&	Weapon::getType(void)
{
	return (_type);
}

void			Weapon::setType(std::string type)
{
	this->_type = type;
	return ;
}
