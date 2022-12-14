/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:05:29 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/18 19:59:53 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

class Fixed
{
	
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		Fixed	&operator=(const Fixed &rhs);
		
		

	private:
		int					_value;
		static const int	_bit = 8;
};


#endif
