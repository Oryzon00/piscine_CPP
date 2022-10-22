/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:56:02 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/22 02:43:52 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap: Default constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(ScavTrap const &src) : ClapTrap(src)
{
	std::cout << "ScavTrap: Copy constructor called" << std::endl;
	return ;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_hp = 100;
	_energy = 50;
	_damage = 20;
	std::cout << "ScavTrap: Constructor called" << std::endl;
	return ;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap: Destructor called" << std::endl;
	return ;
}

ScavTrap	&ScavTrap::operator=(ScavTrap const &right)
{
	this->_name = right._name;
	this->_hp = right._hp;
	this->_energy = right._energy;
	this->_damage = right._damage;
	return (*this);
}

void	ScavTrap::attack(std::string const &target)
{
	if (checkHpEnergy() == false)
		return ;
	_energy--;
	std::cout <<
		"ScavTrap " << _name << " attacks " << target << ", causing " <<
		_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	if (checkHpEnergy() == false)
		return ;
	std::cout << "Scavtrap " << _name << " has entered gate keeper mode !" 
		<< std::endl;
}
