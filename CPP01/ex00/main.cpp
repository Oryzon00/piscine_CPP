/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:57:52 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/10 18:53:10 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int	main(void)
{
	Zombie	*jean = newZombie("jean");
	Zombie	charles("charles");
	
	jean->announce();
	charles.announce();
	randomChump("julie");

	delete jean;
}
