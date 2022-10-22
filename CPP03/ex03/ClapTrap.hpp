/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 17:50:06 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/21 21:11:45 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <stdbool.h>
#include <iostream>

class ClapTrap
{
	public:
		
		ClapTrap(void);
		ClapTrap(ClapTrap const &src);
		ClapTrap(std::string name);
		~ClapTrap(void);

		ClapTrap	&operator=(ClapTrap const &right);

		void		attack(std::string const &target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	protected:
		std::string	_name;
		int			_hp;
		int			_energy;
		int			_damage;
		bool		checkHpEnergy(void);
		
};
