#pragma once

#include <exception>
#include <algorithm>

class NoOccurenceFoundException : public std::exception
{
	public:
		virtual const char* what(void) const throw()
		{
			return ("Error: No occurence found !");
		}		
};



template<typename T>
typename T::iterator	easyfind(T & container, int num)
{
	typedef typename T::iterator Iter;
	Iter it = find(container.begin(), container.end(), num);
	if (*it == num)
		return (it);
	throw NoOccurenceFoundException();
}
