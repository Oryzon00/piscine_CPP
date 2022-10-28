/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:21:24 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/28 20:41:16 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("Animal")
{
	std::cout << "Animal: default constructor called" << std::endl;
}

Animal::Animal(Animal const &src) : _type(src._type)
{
	std::cout << "Animal: copy constructor called" << std::endl;
}

Animal::~Animal(void)
{
	std::cout << "Animal: destructor called" << std::endl;
}

Animal	&Animal::operator=(Animal const &right)
{
	this->_type = right._type;
	return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->_type);
}

void	Animal::makeSound(void) const
{
	std::cout << "* Animal sound... *" << std::endl;
}

void	Animal::setType(std::string type)
{
	this->_type = type;
}
