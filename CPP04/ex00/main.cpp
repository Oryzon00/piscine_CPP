/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/24 16:14:13 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/25 00:16:09 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	Animal*			animal = new Animal();
	Animal*			dog = new Dog();
	Animal*			cat = new Cat();
	WrongAnimal*	wrongAnimal = new WrongAnimal();
	WrongAnimal*	wrongCat = new WrongCat();		
	
	std::cout << std::endl;
	
	std::cout << animal->getType() << std::endl;
	std::cout << dog->getType() << std::endl;
	std::cout << cat->getType() << std::endl;
	std::cout << wrongAnimal->getType() << std::endl;
	std::cout << wrongCat->getType() << std::endl;
	
	std::cout << std::endl;

	animal->makeSound();
	cat->makeSound();
	dog->makeSound();
	wrongAnimal->makeSound();
	wrongCat->makeSound();
	
	std::cout << std::endl;
	
	delete animal;
	delete dog;
	delete cat;
	delete wrongAnimal;
	delete wrongCat;
	return 0;
}
