/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:56:15 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/24 17:26:06 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"

class Dog: public Animal
{
	public:
		Dog(void);
		Dog(Dog const & src);
		~Dog(void);
		
		Dog&	operator=(Dog const & right);

		virtual void	makeSound(void) const;

	private:

	protected:

};
