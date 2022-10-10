/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 18:58:20 by ajung             #+#    #+#             */
/*   Updated: 2022/10/10 19:15:49 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int n, std::string name )
{
	Zombie	*horde = new Zombie[n];
	for(int i = 0; i < n; i++)
	{
		horde[i].set_name(name);
	}
	return (horde);
}
