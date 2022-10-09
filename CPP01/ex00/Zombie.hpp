/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 19:58:57 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/09 20:11:29 by oryzon           ###   ########.fr       */
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
		Zombie	*newZombie(std::string name);
		void	randomChump(std::string name);

	private:
		std::string	_name;

};


#endif
