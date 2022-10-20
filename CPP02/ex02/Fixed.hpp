/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:05:29 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/19 19:52:13 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <ostream>
#include <stdbool.h>

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

		int		toInt(void) const;
		float	toFloat(void) const;
		
		//Operator assignation
		Fixed	&operator=(const Fixed &rhs);
		
		//Operator de comparaison
		bool	operator>(const Fixed &right);
		bool	operator<(const Fixed &right);
		bool	operator>=(const Fixed &right);
		bool	operator<=(const Fixed &right);
		bool	operator==(const Fixed &right);
		bool	operator!=(const Fixed &right);

		//Operator arithmetique
		Fixed	operator+(const Fixed &right);
		Fixed	operator-(const Fixed &right);
		Fixed	operator*(const Fixed &right);
		Fixed	operator/(const Fixed &right);

		//Operator preincrementation ++i
		Fixed	operator++(void);
		Fixed	operator--(void);
		
		//Operator post incrementation i++
		Fixed	operator++(int);
		Fixed	operator--(int);

		static Fixed		&min(Fixed &nb1, Fixed &nb2);
		static const Fixed	&min(const Fixed &nb1, const Fixed &nb2);
		
		static Fixed		&max(Fixed &nb1, Fixed &nb2);
		static const Fixed	&max(const Fixed &nb1, const Fixed &nb2);


	private:
		int					_value;
		static const int	_fractional_bits = 8;
};

std::ostream	&operator<<(std::ostream & out, Fixed const &param);

#endif
