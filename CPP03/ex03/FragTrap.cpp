/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:02:54 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/28 18:26:20 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	
	std::cout << "FragTrap: " << _name << " default constructor called" << std::endl;
	return ;
}

FragTrap::FragTrap(FragTrap const & src) : ClapTrap(src)
{
	std::cout << "FragTrap: " << _name << " copy constructor called " << std::endl;
	return ;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 100;
	_damage = 30;
	std::cout << "FragTrap: " << _name << " Constructor called" << std::endl;
	return ;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap: " << _name << " Destructor called" << std::endl;
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
