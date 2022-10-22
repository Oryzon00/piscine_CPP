/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:48:45 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/22 03:08:53 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

void	foo(void)
{
	DiamondTrap bar;
	return ;
}

int	main(void)
{
	ClapTrap	Jean = ClapTrap("Jean");
	ScavTrap	Didier = ScavTrap("Didier");
	ClapTrap	Marc = ClapTrap("Marc");
	FragTrap	Paul = FragTrap("Paul");

	Didier.attack("Marc");
	Marc.takeDamage(20);
	Marc.attack("Jean");
	for(int i = 0; i < 11; i++)
		Jean.beRepaired(1);
	Paul.attack("Didier");
	Didier.takeDamage(30);
	Didier.guardGate();
	Paul.highFiveGuys();
	foo();
	DiamondTrap Richard = DiamondTrap("Richard");
	Richard.whoAmI();
	Richard.beRepaired(0);
	Richard.attack("sac de frappe");
	Richard.takeDamage(0);
	return (0);
}
