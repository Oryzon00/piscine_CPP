/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   learning.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 14:24:02 by ajung             #+#    #+#             */
/*   Updated: 2022/09/27 14:46:49 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(void)
{
	char buffer[256];
	
	std::cout << "Hello world !" << std::endl;
	std::cout << "How old are you ? ";
	std::cin >> buffer;
	std::cout << std::endl;
	std::cout << "You are " << buffer 
		<< " years old ! Congratulations" << std::endl; 
}
