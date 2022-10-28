/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:40:53 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/28 19:55:47 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::Brain(Brain &src)
{
	*this = src;
	std::cout << "Brain: copy constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain: destructor called" << std::endl;
}

Brain&	Brain::operator=(Brain const & right)
{
	for(int i = 0; i < 100; i++)
		this->_ideas[i] = right._ideas[i];
	return (*this);
}
