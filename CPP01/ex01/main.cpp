/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:57:52 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/10 19:18:53 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void)
{
	Zombie	*horde = zombieHorde(10, "Jean-Jacques");
	for(int i = 0; i < 10; i++)
	{
		horde[i].announce();
	}
	delete [] horde;
	return (0);
}
