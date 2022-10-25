/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:44:36 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/24 17:24:54 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal()
{
	this->_type = "Cat";
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src)
{
	std::cout << "Cat: copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "Cat: destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const &right)
{
	this->_type = right._type;
	
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "* Miaouuu~ *" << std::endl;
}
