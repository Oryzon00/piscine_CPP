/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:40:12 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/28 19:54:18 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain &src);
		~Brain(void);
		
		Brain&	operator=(Brain const & right);

	private:
		std::string _ideas[100];
	protected:
		

};
