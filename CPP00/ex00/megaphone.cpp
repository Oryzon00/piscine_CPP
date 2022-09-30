/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 01:32:21 by oryzon            #+#    #+#             */
/*   Updated: 2022/09/30 02:19:08 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	i = 1;
	j = 0;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			std::cout << (char) toupper(av[i][j]);	
			j++;
		}
		i++;
		// if (av[i])
		// 	std::cout << ' ';
		
	}
	std::cout << std::endl;
	return (0);
}
