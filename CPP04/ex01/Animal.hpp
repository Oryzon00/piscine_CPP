/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:15:44 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/24 17:23:49 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Animal
{
	public:
		Animal(void);
		Animal(Animal const &src);
		virtual ~Animal(void);

		Animal&	operator=(Animal const &right);

		virtual void	makeSound(void) const;
		std::string		getType(void) const;

	private:

	protected:
		std::string	_type;
	
};
