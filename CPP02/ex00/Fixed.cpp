/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:05:27 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/18 18:47:45 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


Fixed::Fixed(void) : _entier(0), _bit(4)
{
	//initialise a 0 la valeur
	return ;
}

Fixed::Fixed(Fixed const & src) : _entier(src._entier), _bit(4)
{
	return ;
}

Fixed::~Fixed(void)
{
	return ;
}

Fixed &	Fixed::operator=(const Fixed & rhs) // pq ca peut pas etre const 
{
	this->_entier = rhs.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void)
{
	return (this->_entier);
}

void	Fixed::setRawBits(int const raw)
{
	(void) raw;
}
