/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/21 23:02:48 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/22 01:13:59 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>

class FragTrap : public ClapTrap
{
	public:
		FragTrap(void);
		FragTrap(FragTrap const &src);
		FragTrap(std::string name);
		~FragTrap(void);

		FragTrap	&operator=(FragTrap const &right);

		void	highFiveGuys(void);
	
	private:
		
};
