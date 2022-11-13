#include "Span.hpp"
#include <algorithm>


Span::Span(void) : _N(0), _array(NULL), _index(0)
{
	
}

Span::Span(size_t N) : _N(N), _array(new int[_N]), _index(0)
{
	bzero(_array, sizeof(_array));
}

Span::Span(Span const &src) : _N(src._N), _array(new int[_N]), _index(src._index)
{
	for(size_t i = 0; i < _N; i++)
		_array[i] = src._array[i];

}

Span::~Span(void)
{
	delete [] _array;
}

Span&	Span::operator=(Span const &rhs)
{
	_N = rhs._N;
	_array = new int[_N];
	_index = rhs._index;
	for(size_t i = 0; i < _N; i++)
		_array[i] = rhs._array[i];
	return (*this);
	
}

/*----------------------------------------------------------------------------*/


const char* Span::SpanIsFullException::what(void) const throw()
{
	return ("Error: Span is full !");
}

const char*	Span::NoDistanceCanBeFoundException::what(void) const throw()
{
	return ("Error: No distance can be found !");
}

/*----------------------------------------------------------------------------*/

void	Span::addNumber(int num)
{
	if (_index == _N)
		return (throw Span::SpanIsFullException());
	_array[_index] = num;
	_index++;
}

int	Span::shortestSpan(void)
{
	if (_N < 2)
		throw Span::NoDistanceCanBeFoundException();
	int	shortestSpan = abs(_array[0] - _array[1]);
	for(size_t i = 0; i < _N - 1; i++)
	{
		for (size_t j = i + 1; j < _N; j++)
		{
			if (abs(_array[i] - _array[j]) < shortestSpan)
				shortestSpan = abs(_array[i] - _array[j]);
		}
	}
	return (shortestSpan);
}

int Span::longestSpan(void)
{
	if (_N < 2)
		throw Span::NoDistanceCanBeFoundException();
	int	longestSpan = abs(_array[0] - _array[1]);
	for(size_t i = 0; i < _N - 1; i++)
	{
		for (size_t j = i + 1; j < _N; j++)
		{
			if (abs(_array[i] - _array[j]) > longestSpan)
				longestSpan = abs(_array[i] - _array[j]);
		}
	}
	return (longestSpan);
}

void	Span::addNumberFromTo(int nb1, int nb2)
{
	if (nb1 <= nb2)
	{
		while (nb1 <= nb2)
		{
			addNumber(nb1);
			nb1++;
		}
	}
	else
	{
		while (nb2 <= nb1)
		{
			addNumber(nb2);
			nb2++;
		}
	}
}
