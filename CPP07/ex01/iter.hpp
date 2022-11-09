#pragma once

#include <stddef.h>
#include <iostream>

template<typename T>
void	iter(T tab[], size_t size, void (f)(T param))
{
	for (size_t i = 0; i < size; i++)
		f(tab[i]);
}

template<typename T>
void	print(T elem)
{
	std::cout << elem << std::endl;
}
