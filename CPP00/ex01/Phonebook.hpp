/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 02:24:12 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/12 13:49:45 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include <string>
#include "Contact.hpp"

#define FALSE 0
#define TRUE 1

class Phonebook
{
	public:
		//Constructor, Destructor
		Phonebook(void);
		~Phonebook(void);

		//function
		void	add_contact(Contact contact);
		int		get_index(void);
		Contact	get_contact(int index);
		int		get_status_is_full(void);
		void	print_all_contact(void);
		void	print_contact(int index);

	private:
		//Attributes
		Contact 	list_contact[8];
		int			index;
		int			is_full;
		std::string	troncate(std::string str);
		
};
#endif
