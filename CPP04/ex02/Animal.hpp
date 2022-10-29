/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:15:44 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/29 01:53:03 by oryzon           ###   ########.fr       */
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

		virtual void	makeSound(void) const = 0;
		std::string		getType(void) const;
		void			setType(std::string type);

	private:

	protected:
		std::string	_type;
	
};
