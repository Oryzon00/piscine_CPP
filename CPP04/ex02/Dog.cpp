/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:58:44 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/25 02:50:33 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal(), _cerveau(new Brain())
{
	this->_type = "Dog";
	std::cout << "Dog: default constructor called" << std::endl;
}

Dog::Dog(Dog const & src) : Animal(src), _cerveau(new Brain())
{
	std::cout << "Dog: copy constructor called" << std::endl;
}

Dog::~Dog(void)
{
	delete _cerveau;
	std::cout << "Dog: destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "* Wouuf~ *" << std::endl;
}
