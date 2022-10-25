/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 00:40:12 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/25 02:36:47 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const &src);
		~Brain(void);
		
		Brain&	operator=(Brain const & right);

	private:
		std::string _ideas[100];
	protected:
		

};
