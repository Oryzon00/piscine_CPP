/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:31:44 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/25 02:33:59 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public:
		Cat(void);
		Cat(Cat const & src);
		virtual ~Cat(void);
		
		Cat&	operator=(Cat const & right);

		virtual void	makeSound(void) const;
		
	private:
		Brain*	_cerveau;
	
	protected:
};
