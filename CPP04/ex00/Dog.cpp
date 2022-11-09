/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:44 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/24 17:25:54 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal()
{
	this->_type = "Dog";
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src)
{
	std::cout << "Dog: copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "Dog: destructor called" << std::endl;
}

Dog&	Dog::operator=(Dog const &right)
{
	this->_type = right._type;
	
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "* Wouuf~ *" << std::endl;
}
