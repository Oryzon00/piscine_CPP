/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:05:29 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/18 18:47:47 by oryzon           ###   ########.fr       */
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

		int		getRawBits(void);
		void	setRawBits(int const raw);
		Fixed &	operator=(const Fixed  & rhs); // pq ca peut pas etre const 
		
		

	private:
		int			_entier;
		const int	_bit;
};


#endif
