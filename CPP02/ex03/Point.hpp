/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/20 01:59:28 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/20 02:05:43 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point 
{
	public:
	
				Point(void);
				Point(float const x, float const y);
				Point(Point const &src);
				~Point(void);

		Point	&operator=(Point const &right);


	private:
		Fixed const _x;
		Fixed const _y;
	
};

bool bsp( Point const a, Point const b, Point const c, Point const point);
