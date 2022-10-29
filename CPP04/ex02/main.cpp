/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:14:13 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/29 01:53:42 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal*			dog = new Dog();
	Animal*			cat = new Cat();
	
	std::cout << std::endl;
	
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	
	std::cout << std::endl;

	cat->makeSound();
	dog->makeSound();
	
	std::cout << std::endl;

	delete dog;
	delete cat;

	std::cout << std::endl << "---------------------" << std::endl << std::endl;

	Animal*	zoo[10];
	std::cout << std::endl;
	
	for(int i = 0; i < 10; i++)
	{
		if (i < 5)
			zoo[i] = new Cat();
		else
			zoo[i] = new Dog();
		std::cout << std::endl;
	}

	std::cout << std::endl << "---------------------" << std::endl << std::endl;

	for (int i = 0; i < 10; i++)
	{
		delete zoo[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;

	std::cout << std::endl << "---------------------" << std::endl << std::endl;

	std::cout << "Testing for shallow or deep copy" << std::endl << std::endl;
	
	Cat	chat = Cat();
	Cat	copy = Cat(chat);
	
	std::cout << "chat: " << chat.getType() << std::endl;
	std::cout << "Copy: " << copy.getType() << std::endl;
	std::cout << std::endl;

	copy.setType("Ecureil");
	std::cout << "copy.setType(\"Ecureil\");" << std::endl;
	std::cout << "chat: should be cat: " << chat.getType() << std::endl;
	std::cout << "Copy: should be Ecureil: " << copy.getType() << std::endl;
	std::cout << "--> Deep copy because chat is unchanged" << std::endl;


	return 0;
}
