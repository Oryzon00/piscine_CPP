/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:46:58 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/11 19:47:05 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <iomanip>
#define OK 0
#define ERROR 1

bool	add_contact(Phonebook *repertoire)
{
	std::string	input;
	Contact		contact;
	
	std::cout << std::endl << "Creating new contact" << std::endl;
	std::cout << "First name: ";
	do
		std::getline(std::cin, input);
	while (input.length() == 0 && std::cin.good() != 0);
	if (std::cin.good() == 0)
		return (ERROR);
	contact.add_first_name(input);

	std::cout << "Last name: ";
	do
		std::getline(std::cin, input);
	while (input.length() == 0 && std::cin.good() != 0);
	if (std::cin.good() == 0)
		return (ERROR);
	contact.add_last_name(input);

	std::cout << "Nickname: ";
	do
		std::getline(std::cin, input);
	while (input.length() == 0 && std::cin.good() != 0);
	if (std::cin.good() == 0)
		return (ERROR);
	contact.add_nickname(input);
	
	std::cout << "Phone number: ";
	do
		std::getline(std::cin, input);
	while (input.length() == 0 && std::cin.good() != 0);
	if (std::cin.good() == 0)
		return (ERROR);
	contact.add_phone_number(input);

	std::cout << "Whats your deepest, darkest secret ?" <<std::endl;
	do
		std::getline(std::cin, input);
	while (input.length() == 0 && std::cin.good() != 0);
	if (std::cin.good() == 0)
		return (ERROR);
	contact.add_darkest_secret(input);
	std::cout << std::endl;

	repertoire->add_contact(contact);
	return (OK);
}

bool	search_contact(Phonebook *repertoire)
{
	int	input;
	
	repertoire->print_all_contact();
	while(std::cin.good() != 0)
	{
		std::cout << "Please enter the index of the contact: ";
		std::cin >> input;
		if (input > 0 && input < 8 
			&& (input <= repertoire->get_index() || repertoire->get_status_is_full() == TRUE))
			repertoire->print_contact(input);
		else if (std::cin.good() == 0)
			return (ERROR);
		else
			std::cout << "Error: index" << std::endl;
	}
	return (OK);
	
}

int	main(void)
{
	Phonebook	repertoire;
	std::string input;
	
	// J'accepte les entrées vides
	std::cout << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
	
	while(std::cin.good() != 0)
	{
		std::getline(std::cin, input);
		if (input == "ADD")
		{
			if (add_contact(&repertoire) == ERROR)
				return (ERROR);
			std::cout << std::endl << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
		}	
		else if (input == "SEARCH")
		{
			if (search_contact(&repertoire) == ERROR)
				return (ERROR);
			std::cout << std::endl << "Please enter a command: ADD, SEARCH or EXIT" << std::endl;
		}
		else if (input == "EXIT")
			return (OK);
	}
	return (OK);
}
