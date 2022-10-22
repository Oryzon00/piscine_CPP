/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 01:42:32 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/22 02:15:04 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once 

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
	private:
		std::string	_name;
	
	public:
		DiamondTrap(void);
		DiamondTrap(DiamondTrap const &src);
		DiamondTrap(std::string name);
		~DiamondTrap(void);

		DiamondTrap	&operator=(DiamondTrap const &right);

		void		whoAmI(void);
		void		attack(std::string const & target);
};
