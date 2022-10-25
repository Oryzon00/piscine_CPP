/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:14:13 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/25 03:05:35 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{
	Animal*			animal = new Animal();
	Animal*			dog = new Dog();
	Animal*			cat = new Cat();
	
	std::cout << std::endl;
	
	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	
	std::cout << std::endl;

	animal->makeSound();
	cat->makeSound();
	dog->makeSound();
	
	std::cout << std::endl;

	delete animal;
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

	for (int i = 0; i < 10; i++)
	{
		delete zoo[i];
		std::cout << std::endl;
	}

	std::cout << std::endl;
	return 0;
}
