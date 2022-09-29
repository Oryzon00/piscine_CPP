/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   class.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 15:29:40 by ajung             #+#    #+#             */
/*   Updated: 2022/09/27 15:31:42 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

class Myclass{

public:
	Myclass(void);
	~Myclass(void);	
};

Myclass::Myclass(void){
	std::cout << "Constructor called" << std::endl;
}

Myclass::~Myclass(void){
	std::cout << "Destructor called" << std::endl;
}

int main(void)
{
	Myclass	var;
	return (0);
}
