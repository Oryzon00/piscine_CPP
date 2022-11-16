#pragma once

#include <string>
#include <exception>
#include <iostream>
#include "stddef.h"
#include <strings.h>
#include <cstdlib>
#include <vector>

class Span
{
	public:
		Span(void);
		Span(Span const &src);
		Span(size_t N);
		~Span(void);

		Span&	operator=(Span const &rhs);

		void	addNumber(int num);
		void	fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end);
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
		size_t				_N;
		std::vector<int>	_array;
		
		

	protected:
		
};

/*----------------------------------------------------------------------------*/
