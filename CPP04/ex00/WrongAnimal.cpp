/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:49:18 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/24 23:50:19 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : _type("WrongAnimal")
{
	std::cout << "WrongAnimal: default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const &src) : _type(src._type)
{
	std::cout << "WrongAnimal: copy constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "WrongAnimal: destructor called" << std::endl;
}

WrongAnimal	&WrongAnimal::operator=(WrongAnimal const &right)
{
	this->_type = right._type;
	return (*this);
}

std::string	WrongAnimal::getType(void) const
{
	return (this->_type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* WrongAnimal sound... *" << std::endl;
}
