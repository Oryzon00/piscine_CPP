#pragma once

#include <string>
#include <exception>
#include <iostream>
#include "stddef.h"
#include <strings.h>
#include <cstdlib>

class Span
{
	public:
		Span(Span const &src);
		Span(size_t N);
		~Span(void);

		Span&	operator=(Span const &rhs);

		void	addNumber(int num);
		void	addNumberFromTo(int nb1, int nb2);
		int		shortestSpan(void);
		int		longestSpan(void);

		class SpanIsFullException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

		class NoDistanceCanBeFoundException: public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	private:
		size_t	_N;
		int*	_array;
		size_t	_index;
		Span(void);
		

	protected:
		
};

/*----------------------------------------------------------------------------*/
