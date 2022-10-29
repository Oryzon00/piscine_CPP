/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:44:36 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/25 02:50:35 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal(), _cerveau(new Brain())
{
	this->_type = "Cat";
	std::cout << "Cat: default constructor called" << std::endl;
}

Cat::Cat(Cat const & src) : Animal(src), _cerveau(new Brain())
{
	std::cout << "Cat: copy constructor called" << std::endl;
}

Cat::~Cat(void)
{
	delete _cerveau;
	std::cout << "Cat: destructor called" << std::endl;
}

Cat&	Cat::operator=(Cat const &right)
{
	this->_type = right._type;
	_cerveau = right._cerveau;
	
	return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "* Miaouuu~ *" << std::endl;
}
