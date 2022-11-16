#pragma once

#include <string>
#include <iostream>
#include <stack>


template<typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(void);
		MutantStack(MutantStack const &src);
		~MutantStack(void);

		MutantStack&	operator=(MutantStack const &rhs);

		typedef typename std::stack<T>::container_type::iterator iterator;

		iterator	begin(void)
		{
			return this->c.begin();
		}

		iterator	end(void)
		{
			return this->c.end();
		}

	private:
		

	protected:
		
};

/*----------------------------------------------------------------------------*/


template<typename T>
MutantStack<T>::MutantStack(void)
{
	
}

template<typename T>
MutantStack<T>::MutantStack(MutantStack const &src) : std::stack<T>(src)
{
	
}

template<typename T>
MutantStack<T>::~MutantStack(void)
{
	
}

template<typename T>
MutantStack<T>&	MutantStack<T>::operator=(MutantStack const &rhs)
{
	this->c = rhs.c;
	return *this;
}

/*----------------------------------------------------------------------------*/
