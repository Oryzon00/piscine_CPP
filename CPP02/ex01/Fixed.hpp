/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:05:29 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/19 03:12:50 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>

class Fixed
{
	
	public:
				Fixed(void);
				Fixed(Fixed const & src);
				Fixed(const int nb);
				Fixed(const float nb);
				~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		
		Fixed	&operator=(const Fixed &rhs);

		int		toInt(void) const;
		float	toFloat(void) const;

	private:
		int					_value;
		static const int	_fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream & out, Fixed const &param);

#endif
