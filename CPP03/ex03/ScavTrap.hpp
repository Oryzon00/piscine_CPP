/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 20:50:35 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/22 02:28:28 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "ClapTrap.hpp"
#include <iostream>

class ScavTrap : public virtual ClapTrap
{
	public:
		ScavTrap(void);
		ScavTrap(ScavTrap const &src);
		ScavTrap(std::string name);
		~ScavTrap(void);

		ScavTrap	&operator=(ScavTrap const &right);

		void	attack(std::string const & target);
		void	guardGate(void);
	
	private:
		
};
