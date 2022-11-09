#pragma once

template<typename T>
T	min(T const & a, T const & b)
{
	if (a <= b)
		return (a);
	else
		return (b);
}

template<typename T>
T	max(T const & a, T const & b)
{
	if (a >= b)
		return (a);
	else
		return (b);
}

template<typename T>
void	swap(T & a, T & b)
{
	T tmp = a;
	a = b;
	b = tmp;
}
