/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 18:48:45 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/21 18:57:09 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	
	ClapTrap	Jean = ClapTrap("Jean");
	ClapTrap	Didier = ClapTrap("Didier");

	Jean.attack("Didier");
	Didier.takeDamage(0);
	for(int i = 0; i < 11; i++)
		Didier.beRepaired(1);
	return (0);
}
