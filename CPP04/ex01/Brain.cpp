/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:40:53 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/25 02:37:56 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Brain: default constructor called" << std::endl;
}

Brain::Brain(Brain const &src) : _ideas(src._ideas)
{
	std::cout << "Brain: default constructor called" << std::endl;
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
