#include "PmergeMe.hpp"

# include <cstdlib>


PmergeMe::PmergeMe(int ac, char** av) : _ac(ac), _av(av)
{
	for (int i = 1; i < ac; i++)
	{
		std::string	arg = av[i];
		int		nb = atoi(av[i]);

		if (arg.length() > 11)
			throw CustomException("	arguments must be positives integers");
		for (std::string::iterator it = arg.begin(); it != arg.end(); it++)
		{
			if (!isdigit(*it))
				throw CustomException("	arguments must be positives integers");
		}
		_vector.push_back(nb);
		_deque.push_back(nb);
	}
}

PmergeMe::PmergeMe(void)
{
	
}

PmergeMe::PmergeMe(PmergeMe const &src)
{
	*this = src;
}

PmergeMe::~PmergeMe(void)
{
	
}

PmergeMe&	PmergeMe::operator=(PmergeMe const &rhs)
{
	_ac = rhs._ac;
	_av = rhs._av;
	_vector = rhs._vector;
	_deque = rhs._deque;
	return *this;
}

/*----------------------------------------------------------------------------*/

void	PmergeMe::affVector()
{
	int i = 0;
	for (vec_t::iterator it = _vector.begin(); it != _vector.end(); it++)
	{
		std::cout << i << ": " << *it << std::endl;
		i++;
	}
	std::cout << std::endl;
}
void	PmergeMe::affDeque()
{
	int i = 0;
	for (deque_t::iterator it = _deque.begin(); it != _deque.end(); it++)
	{
		std::cout << i << ": " << *it << std::endl;
	}
	std::cout << std::endl;
}
