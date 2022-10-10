/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:58:57 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/10 18:52:56 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);

	private:
		std::string	_name;

};

Zombie	*newZombie(std::string name);
void	randomChump(std::string name);

#endif
