/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 02:24:01 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/08 18:39:06 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>



Phonebook::Phonebook(void)
{
	this->index = 0;
	this->is_full = FALSE;
	return ;
}

Phonebook::~Phonebook(void)
{
	return ;
}

void	Phonebook::add_contact(Contact contact)
{
	if (this->index >= 8)
	{
		this->is_full = TRUE;
		this->index = 0;
	}
		
	this->list_contact[this->index] = contact;
	this->index++;
}

int	Phonebook::get_index(void)
{
	return (this->index);
}

Contact	Phonebook::get_contact(int index)
{
	return (this->list_contact[index]);
}

int	Phonebook::get_status_is_full(void)
{
	return (this->is_full);
}

std::string	Phonebook::troncate(std::string str)
{
	if (str.length() > 10)
		return (str.substr(0, 9) + ".");
	else
		return (str);
}

void	Phonebook::print_all_contact(void)
{
	int	nb_contact;
	int	i;

	if (this->is_full == TRUE)
		nb_contact = 8;
	else
		nb_contact = this->index;
	i = 0;
	std::cout << std::endl;
	std::cout
   		<< std::right << std::setw(10) << std::setfill(' ') << "index" << "|"
   		<< std::right << std::setw(10) << std::setfill(' ') << "firstname" << "|"
   		<< std::right << std::setw(10) << std::setfill(' ') << "lastname" << "|"
		<< std::right << std::setw(10) << std::setfill(' ') << "nickname" 
		<< std::endl;
	while(i < nb_contact)
	{
		std::cout<< std::right 
			<< std::setw(10) << std::setfill(' ') << i + 1 <<  "|"
			<< std::setw(10) << std::setfill(' ') 
				<< this->troncate(this->list_contact[i].get_first_name()) << "|"
			<< std::setw(10) << std::setfill(' ') 
				<< this->troncate(this->list_contact[i].get_last_name()) << "|"
			<< std::setw(10) << std::setfill(' ') 
				<< this->troncate(this->list_contact[i].get_nickname())
			<< std::endl;
		i++;
	}
	std::cout << std::endl;
}

void	Phonebook::print_contact(int index)
{
	std::cout << "First name: " << this->get_contact(index - 1).get_first_name() << std::endl;
	std::cout << "Last name: " << this->get_contact(index - 1).get_last_name() << std::endl;
	std::cout << "Nickname: " << this->get_contact(index - 1).get_nickname() << std::endl;
	std::cout << "Phone number: " << this->get_contact(index - 1).get_phone_number() << std::endl;
	std::cout << "Darkest secret: " << this->get_contact(index - 1).get_darkest_secret() << std::endl;
}
