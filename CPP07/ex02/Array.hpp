#pragma once

#include <string>
#include <iostream>
#include <exception>
#include <stddef.h>
#include <strings.h>


template<typename T>
class Array
{
	public:
		Array(void);
		Array(unsigned int n);
		Array(Array const &src);
		~Array(void);

		Array&	operator=(Array const &rhs);
		T&		operator[](size_t const i);


		size_t	size(void);

		class BadIndexException : public std::exception
		{
			public:
				virtual const char* what(void) const throw();
		};

	private:
		T * 	_tab;
		size_t	_size;
		

	protected:
		
};

/*----------------------------------------------------------------------------*/

template<typename T>
Array<T>::Array(void) : _tab(new T[0]), _size(0) 
{
	//cree array vide
}

template<typename T>
Array<T>::Array(Array<T> const &src) : _tab(new T[src._size]), _size(src._size)
{
	for (size_t i = 0; i < _size; i++)
		_tab[i] = src._tab[i];
}

template<typename T>
Array<T>::Array(unsigned int n)  : _tab(new T[n]), _size(n) 
{
	bzero(_tab, sizeof(_tab));
}

template<typename T>
Array<T>::~Array(void)
{
	delete [] _tab;
}


/*----------------------------------------------------------------------------*/

template<typename T>
Array<T>&	Array<T>::operator=(Array<T> const &rhs)
{
	delete [] _tab;
	_tab = new T[rhs._size];
	_size = rhs._size;
	for (size_t i = 0; i < _size; i++)
		_tab[i] = rhs._tab[i];
	return (*this);
}

template<typename T>
const char* Array<T>::BadIndexException::what(void) const throw()
{
	return ("Error: bad index");
}

template<typename T>
T&		Array<T>::operator[](size_t const i)
{
	if (i >=  _size)
		throw Array<T>::BadIndexException();
	else
		return _tab[i];
}

/*----------------------------------------------------------------------------*/

template<typename T>
size_t	Array<T>::size(void)
{
	return _size;
}
