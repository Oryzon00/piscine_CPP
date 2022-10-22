/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:02:54 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/22 02:47:35 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	
	std::cout << "FragTrap: default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FragTrap: copy constructor called " << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "FragTrap: Constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: Destructor called" << std::endl;
	return ;
}

FragTrap	&FragTrap::operator=(FragTrap const &right)
{
	this->_name = right._name;
	this->_hp = right._hp;
	this->_energy = right._energy;
	this->_damage = right._damage;
	return (*this);
}

void	FragTrap::highFiveGuys(void)
{
	if (checkHpEnergy() == false)
		return ;
	std::cout << "FragTrap " << _name << " asks for a high five !" << std::endl;
}
