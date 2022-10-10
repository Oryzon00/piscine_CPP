/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:58:57 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/10 19:11:01 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		Zombie(void);
		~Zombie(void);

		void	set_name(std::string name);
		void	announce(void);

	private:
		std::string	_name;

};

Zombie* zombieHorde( int N, std::string name );

#endif
