/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 23:48:42 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/24 23:54:53 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal()
{
	this->_type = "WrongCat";
	std::cout << "WrongCat: default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src) : WrongAnimal(src)
{
	std::cout << "WrongCat: copy constructor called" << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "WrongCat: destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(WrongCat const &right)
{
	this->_type = right._type;
	
	return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "* Miaouuu~ *" << std::endl;
}
