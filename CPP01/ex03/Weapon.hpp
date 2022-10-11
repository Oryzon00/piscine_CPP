/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 16:06:50 by ajung             #+#    #+#             */
/*   Updated: 2022/10/11 18:23:39 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <string>

class Weapon
{

	public:
		Weapon(std::string type);
		Weapon(void);
		~Weapon();

		std::string&	getType(void);
		void			setType(std::string type);

	private:
		std::string	_type;
};

#endif
