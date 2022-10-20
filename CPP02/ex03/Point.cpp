/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 02:00:02 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/20 02:16:39 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(float const x, float const y) : _x(x), _y(y)
{
	return ;
}

Point::Point(Point const &src) : _x(src._x), _y(src._y)
{
	return ;
}

Point::~Point(void)
{
	return ;
}

Point	&Point::operator=(Point const &right) 
{
	this->_x = right._x;
	this->_y = right._y;
	
	return (*this);
}
