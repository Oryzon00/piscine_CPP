#include "Span.hpp"
#include <algorithm>


Span::Span(void) : _N(0)
{
	
}

Span::Span(size_t N) : _N(N)
{

}

Span::Span(Span const &src) : _N(src._N)
{
	_array.clear();
	_array.insert(_array.end(), src._array.begin(), src._array.end());
}

Span::~Span(void)
{

}

Span&	Span::operator=(Span const &rhs)
{
	if (this != &rhs)
	{
		_N = rhs._N;
		_array.clear();
		_array.insert(_array.end(), rhs._array.begin(), rhs._array.end());
	}
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
	if (_array.size() == _N)
		throw Span::SpanIsFullException();
	else
		_array.push_back(num);
}

int	Span::shortestSpan(void)
{
	if (_array.size() < 2)
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
	if (_array.size() < 2)
		throw Span::NoDistanceCanBeFoundException();
	int min = *std::min_element(_array.begin(), _array.end());
	int max = *std::max_element(_array.begin(), _array.end());
	return (max - min);
}

void	Span::fillSpan(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	for(; begin < end; begin++)
	{
		addNumber(*begin);
	}
}
