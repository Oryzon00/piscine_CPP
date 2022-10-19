/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:05:27 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/19 03:34:45 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>
#include <cmath>



Fixed::Fixed(void) : _value(0)
{
	std::cout << "Default constructor called" << std::endl;
	
	return ;
}

Fixed::Fixed(Fixed const & src)
{
	std::cout << "Copy constructor called" << std::endl;
	
	*this = src;
	return ;
}

Fixed::Fixed(const int nb)
{
	std::cout << "Int constructor called" << std::endl;

	this->_value = nb << _fractional_bits;
	return ;
}

Fixed::Fixed(const float nb)
{
	std::cout << "Float constructor called" << std::endl;

	this->_value = roundf(nb * (1 << _fractional_bits));
	return ;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
	
	return ;
}

Fixed &	Fixed::operator=(const Fixed & rhs)
{
	std::cout << "Copy assignment operator called" << std::endl;
	
	this->_value = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const
{
	//std::cout << "getRawBits member function called" << std::endl;
	
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	
	this->_value = raw;
}

int		Fixed::toInt(void) const
{
	return (int) (_value >> _fractional_bits);
}

float	Fixed::toFloat(void) const
{
	return  ((float) _value / (1 << _fractional_bits));
}

std::ostream	&operator<<(std::ostream &out, Fixed const &param)
{
	out << param.toFloat();
	return (out);
}
