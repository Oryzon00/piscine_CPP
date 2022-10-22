/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:48:45 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/21 22:59:37 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int	main(void)
{
	
	ClapTrap	Jean = ClapTrap("Jean");
	ScavTrap	Didier = ScavTrap("Didier");
	ClapTrap	Marc = ClapTrap("Marc");

	Didier.attack("Marc");
	Marc.takeDamage(20);
	Marc.attack("Jean");
	for(int i = 0; i < 11; i++)
		Jean.beRepaired(1);
	Didier.guardGate();
	return (0);
}
