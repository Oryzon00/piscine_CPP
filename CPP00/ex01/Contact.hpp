/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:12:45 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/12 13:31:32 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <string>

class Contact
{
	public:

		//Constructor, Destructor
		Contact(void);
		~Contact(void);

		//setter
		void	add_first_name(std::string);
		void	add_last_name(std::string);
		void	add_nickname(std::string);
		void	add_phone_number(std::string);
		void	add_darkest_secret(std::string);

		//accessor
		std::string	get_first_name(void);
		std::string	get_last_name(void);
		std::string	get_nickname(void);
		std::string	get_phone_number(void);
		std::string	get_darkest_secret(void);
		
	
	private:
		//attributes
		std::string	first_name;
		std::string	last_name;
		std::string	nickname;
		std::string	phone_number;
		std::string	darkest_secret;
		
};


#endif
