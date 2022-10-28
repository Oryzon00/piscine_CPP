/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:57:54 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/28 18:43:26 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>


ClapTrap::ClapTrap(void) :
	_name("no name"), _hp(10), _energy(10), _damage(10)
{
	std::cout << "ClapTrap: " << _name << " Default constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(ClapTrap const &src) :
	_name(src._name), _hp(src._hp), _energy(src._energy), _damage(src._damage)
{
	std::cout << "ClapTrap: " << _name << " Copy constructor called" << std::endl;
	return ;
}

ClapTrap::ClapTrap(std::string name) :
	_name(name), _hp(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap: " << _name << " constructor called" << std::endl;
	return ;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap: " << _name << " destructor called" << std::endl;
	return ;
}

ClapTrap	&ClapTrap::operator=(ClapTrap const &right)
{
	this->_name = right._name;
	this->_hp = right._hp;
	this->_energy = right._energy;
	this->_damage = right._damage;
	return (*this);
}

//------------------------------------------------------------------------------

bool	ClapTrap::checkHpEnergy(void)
{
	if (_hp <= 0)
	{
		std::cout << "Claptrap " << _name << " has no hp left" << std::endl;
		return (false);
	}
	else if (_energy <= 0)
	{
		std::cout << "Claptrap " << _name << " has no energy left" << std::endl;
		return (false);
	}
	else
		return (true);
		
}

void	ClapTrap::attack(std::string const &target)
{
	if (checkHpEnergy() == false)
		return ;
	_energy--;
	std::cout <<
		"ClapTrap " << _name << " attacks " << target << ", causing " <<
		_damage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (checkHpEnergy() == false)
		return ;
	_hp -= amount;
	if (_hp <= 0)
		_hp = 0;
	std::cout <<
		"Claptrap " << _name << " takes " << amount << " damage, hp is now at " <<
		_hp << " !" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (checkHpEnergy() == false)
		return ;
	_hp += amount;
	_energy--;
	std::cout << 
		"ClapTrap " << _name << " repairs " << amount << " hp, hp is now at " <<
		_hp << " !" << std::endl; 
}
