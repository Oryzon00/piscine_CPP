/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:51:31 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/28 18:48:41 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"
#include "ClapTrap.hpp"

DiamondTrap::DiamondTrap(void) : 
	ClapTrap("no name_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = "no name";
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap: " << _name << " Default constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & src) :
	ClapTrap(src._name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_hp = src._hp;
	this->_energy = src._energy;
	this->_damage = src._damage;
	std::cout << "DiamondTrap: " << _name << " Copy constructor called" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) :
	ClapTrap(name + "_clap_name"), ScavTrap(), FragTrap()
{
	this->_name = name;
	this->_hp = FragTrap::_hp;
	this->_energy = ScavTrap::_energy;
	this->_damage = FragTrap::_damage;
	std::cout << "DiamondTrap: " << _name << " Constructor called" << std::endl;
}

DiamondTrap::~DiamondTrap(void)
{
	std::cout << "DiamondTrap: " << _name << " Destructor called" << std::endl;
}

void	DiamondTrap::whoAmI(void)
{
	if (checkHpEnergy() == false)
		return ;
	std::cout <<
		"First name: " << this->_name << ", family name: "
		<< ClapTrap::_name << std::endl;
}

void	DiamondTrap::attack(std::string const &target)
{
	ScavTrap::attack(target);
}

DiamondTrap	&DiamondTrap::operator=(DiamondTrap const &right)
{
	this->_hp = right._hp;
	this->_energy = right._energy;
	this->_name = right._name;
	this->_damage = right._damage;
	return (*this);
}
