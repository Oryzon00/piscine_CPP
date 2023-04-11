#include "PmergeMe.hpp"

PmergeMe::PmergeMe(int ac, char** av) : _ac(ac), _av(av), _odd(false)
{
	if (ac < 3)
		throw CustomException("	min 2 arguments");
	if (ac > 5001)
		throw CustomException("	max 5000 arguments");
	
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
	_odd = rhs._odd;

	_alone_vec = rhs._alone_vec;
	_vec_parse = rhs._vec_parse;
	_vec_pair = rhs._vec_pair;
	_vec_A = rhs._vec_A;
	_vec_B = rhs._vec_B;

	_alone_deque = rhs._alone_deque;
	_deque_parse = rhs._deque_parse;
	_deque_pair = rhs._deque_pair;
	_deque_A = rhs._deque_A;
	_deque_B = rhs._deque_B;
	_time_vec = rhs._time_vec;
	_time_deque = rhs._time_deque;
	return *this;
}

/*----------------------------------------------------------------------------*/

/* PUBLIC */

// void	PmergeMe::sortVector(void)
// {
// 	clock_t	start = clock();

// 	parseDataVec();
// 	showUnsorted();

// 	makePairsVec();
// 	std::cout << "--- make pair  ---" << std::endl;
// 	affVector(_vec_pair);

// 	sortPairsMemberVec();
// 	std::cout << "--- sort Pairs Member ---" << std::endl;
// 	affVector(_vec_pair);

// 	sortPairsVec();
// 	std::cout << "--- sort pairs ---" << std::endl;
// 	affVector(_vec_pair);

// 	makeChainsVec();
// 	std::cout << "--- chain A ---" << std::endl;
// 	affVector(_vec_A);
// 	std::cout << "--- chain B ---" << std::endl;
// 	affVector(_vec_B);

// 	InsertIntoMainChainVec();
// 	std::cout << "--- chain A final ---" << std::endl;
// 	affVector(_vec_A);

// 	showSorted(); 

// 	clock_t	end = clock();
// 	_time_vec = static_cast<double>(end - start / CLOCKS_PER_SEC);
// }

void	PmergeMe::sortVector(void)
{
	clock_t	start = clock();

	parseDataVec();
	showUnsorted();
	makePairsVec();
	sortPairsMemberVec();
	sortPairsVec();
	makeChainsVec();
	InsertIntoMainChainVec();
	showSorted(); 
	clock_t	end = clock();
	_time_vec = static_cast<double>(end - start / CLOCKS_PER_SEC);
}

// void	PmergeMe::sortDeque(void)
// {
// 	clock_t	start = clock();

// 	parseDataDeque();

// 	makePairsDeque();
// 	std::cout << "--- make pair  ---" << std::endl;
// 	affDeque(_deque_pair);

// 	sortPairsMemberDeque();
// 	std::cout << "--- sort Pairs Member ---" << std::endl;
// 	affDeque(_deque_pair);

// 	sortPairsDeque();
// 	std::cout << "--- sort pairs ---" << std::endl;
// 	affDeque(_deque_pair);

// 	makeChainsDeque();
// 	std::cout << "--- chain A ---" << std::endl;
// 	affDeque(_deque_A);
// 	std::cout << "--- chain B ---" << std::endl;
// 	affDeque(_deque_B);

// 	InsertIntoMainChainDeque();
// 	std::cout << "--- chain A final ---" << std::endl;
// 	affDeque(_deque_A);
// 	clock_t	end = clock();
// 	_time_deque = static_cast<double>(end - start / CLOCKS_PER_SEC);
// }

void	PmergeMe::sortDeque(void)
{
	clock_t	start = clock();

	parseDataDeque();
	makePairsDeque();
	sortPairsMemberDeque();
	sortPairsDeque();
	makeChainsDeque();
	InsertIntoMainChainDeque();
	clock_t	end = clock();
	_time_deque = static_cast<double>(end - start / CLOCKS_PER_SEC);
}

void	PmergeMe::showUnsorted(void)
{
	std::cout << "Before:	";
	for (vec_t::iterator it = _vec_parse.begin(); it != _vec_parse.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::showSorted(void)
{
	std::cout << "After:	";
	for (vec_t::iterator it = _vec_A.begin(); it != _vec_A.end(); it++)
	{
		std::cout << *it << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::showTimeVector(void)
{
	std::cout << "Time to process a range of	" << _ac - 1 << " elements with std::vector : "
		<< _time_vec << " us" << std::endl; 
}

void	PmergeMe::showTimeDeque(void)
{
	std::cout << "Time to process a range of	" << _ac - 1 << " elements with std::deque  : "
		<< _time_deque << " us" << std::endl;
}


/*----------------------------------------------------------------------------*/

/* DEBUG  */

void	PmergeMe::affVector(vec_t &vector)
{
	std::cout << "-----------------------------------------------------" << std::endl;
	int i = 0;
	for (vec_t::iterator it = vector.begin(); it != vector.end(); it++)
	{
		std::cout << i << ": " << *it << std::endl;
		i++;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void	PmergeMe::affVector(vec_pair_t &vector)
{
	std::cout << "-----------------------------------------------------" << std::endl;
	int i = 0;
	for (vec_pair_t::iterator it = vector.begin(); it != vector.end(); it++)
	{
		std::cout << i << ": " << it->first << " / " << it->second << std::endl;
		i++;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void	PmergeMe::affDeque(deque_t &deque)
{
	std::cout << "-----------------------------------------------------" << std::endl;
	int i = 0;
	for (deque_t::iterator it = deque.begin(); it != deque.end(); it++)
	{
		std::cout << i << ": " << *it << std::endl;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

void	PmergeMe::affDeque(deque_pair_t &deque)
{
	std::cout << "-----------------------------------------------------" << std::endl;
	int i = 0;
	for (deque_pair_t::iterator it = deque.begin(); it != deque.end(); it++)
	{
		std::cout << i << ": " << it->first << " / " << it->second << std::endl;
		i++;
	}
	std::cout << "-----------------------------------------------------" << std::endl;
	std::cout << std::endl;
}

/*----------------------------------------------------------------------------*/

/* DEALLOC TRICK SWAP */

void	PmergeMe::clearVector(vec_t& vector)
{
	std::vector<u_int>().swap(vector);
}

void	PmergeMe::clearVector(vec_pair_t vector)
{
	std::vector<pair_t>().swap(vector);
}

void	PmergeMe::clearDeque(deque_t& deque)
{
	std::deque<u_int>().swap(deque);
}

void	PmergeMe::clearDeque(deque_pair_t & deque)
{
	std::deque<pair_t>().swap(deque);
}

/*----------------------------------------------------------------------------*/

/* VECTOR ALGO */

void	PmergeMe::parseDataVec(void)
{
	for (int i = 1; i < _ac; i++)
	{
		std::string	arg = _av[i];
		int		nb = atoi(_av[i]);

		if (arg.length() > 11)
			throw CustomException("	arguments must be positives integers");
		if (nb > INT_MAX)
			throw CustomException("	arguments must be positives integers");
		for (std::string::iterator it = arg.begin(); it != arg.end(); it++)
		{
			if (!isdigit(*it))
				throw CustomException("	arguments must be positives integers");
		}
		_vec_parse.push_back(nb);
	}
}

void	PmergeMe::makePairsVec(void)
{
	if (_vec_parse.size() % 2 == 1)
	{
		_alone_vec = _vec_parse.back();
		_odd = true;
		_vec_parse.pop_back();
	}
	for (vec_t::iterator it = _vec_parse.begin(); it != _vec_parse.end(); it++)
	{
		u_int first = *it;
		it++;
		u_int	second = *it;
		_vec_pair.push_back(std::make_pair(first, second));
	}
}

void	PmergeMe::sortPairsMemberVec(void)
{
	
	for (vec_pair_t::iterator it = _vec_pair.begin(); it != _vec_pair.end(); it++)
	{
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}
}

void 	PmergeMe::sortPairsVec(void)
{
	RecursiveSortPairsVec(_vec_pair.size());
}

void	PmergeMe::RecursiveSortPairsVec(size_t n)
{
	if (n <= 1)
		return ;
	RecursiveSortPairsVec(n - 1);
	u_int last = _vec_pair[n - 1].first;
	int j = n - 2;
	while (j >= 0 && _vec_pair[j].first > last)
	{
		std::swap(_vec_pair[j + 1], _vec_pair[j]);
		j--;
	}
	_vec_pair[j + 1].first = last;
}

void	PmergeMe::makeChainsVec(void)
{
	for (vec_pair_t::iterator it = _vec_pair.begin(); it != _vec_pair.end(); it++)
	{
		_vec_A.push_back(it->first);
		_vec_B.push_back(it->second);
	}
	if (_odd)
		_vec_B.push_back(_alone_vec);
}

void	PmergeMe::InsertIntoMainChainVec(void)
{
	
	for (vec_t::iterator itB = _vec_B.begin(); itB != _vec_B.end(); itB++)
	{
		bool found = false;
		for (vec_t::iterator itA = _vec_A.begin(); itA != _vec_A.end(); itA++)
		{
			if (*itB <= *itA)
			{
				_vec_A.insert(itA, *itB);
				found = true;
				break;
			}
		}
		if (found == false)
			_vec_A.insert(_vec_A.end(), *itB);
	}
}

/*----------------------------------------------------------------------------*/

/* DEQUE ALGO */

void	PmergeMe::parseDataDeque(void)
{
	for (int i = 1; i < _ac; i++)
	{
		std::string	arg = _av[i];
		int		nb = atoi(_av[i]);

		if (arg.length() > 11)
			throw CustomException("	arguments must be positives integers");
		if (nb > INT_MAX)
			throw CustomException("	arguments must be positives integers");
		for (std::string::iterator it = arg.begin(); it != arg.end(); it++)
		{
			if (!isdigit(*it))
				throw CustomException("	arguments must be positives integers");
		}
		_deque_parse.push_back(nb);
	}
}

void	PmergeMe::makePairsDeque(void)
{
	if (_deque_parse.size() % 2 == 1)
	{
		_alone_deque = _deque_parse.back();
		_odd = true;
		_deque_parse.pop_back();
	}
	for (deque_t::iterator it = _deque_parse.begin(); it != _deque_parse.end(); it++)
	{
		u_int first = *it;
		it++;
		u_int	second = *it;
		_deque_pair.push_back(std::make_pair(first, second));
	}
}

void	PmergeMe::sortPairsMemberDeque(void)
{
	for (deque_pair_t::iterator it = _deque_pair.begin(); it != _deque_pair.end(); it++)
	{
		if (it->first > it->second)
			std::swap(it->first, it->second);
	}
}

void 	PmergeMe::sortPairsDeque(void)
{
	RecursiveSortPairsDeque(_deque_pair.size());
}

void	PmergeMe::RecursiveSortPairsDeque(size_t n)
{
	if (n <= 1)
		return ;
	RecursiveSortPairsDeque(n - 1);
	u_int last = _deque_pair[n - 1].first;
	int j = n - 2;
	while (j >= 0 && _deque_pair[j].first > last)
	{
		std::swap(_deque_pair[j + 1], _deque_pair[j]);
		j--;
	}
	_deque_pair[j + 1].first = last;
}

void	PmergeMe::makeChainsDeque(void)
{
	for (deque_pair_t::iterator it = _deque_pair.begin(); it != _deque_pair.end(); it++)
	{
		_deque_A.push_back(it->first);
		_deque_B.push_back(it->second);
	}
	if (_odd)
		_deque_B.push_back(_alone_deque);
}

void	PmergeMe::InsertIntoMainChainDeque(void)
{
	for (deque_t::iterator itB = _deque_B.begin(); itB != _deque_B.end(); itB++)
	{
		bool found = false;
		for (deque_t::iterator itA = _deque_A.begin(); itA != _deque_A.end(); itA++)
		{
			if (*itB <= *itA)
			{
				_deque_A.insert(itA, *itB);
				found = true;
				break;
			}
		}
		if (found == false)
			_deque_A.insert(_deque_A.end(), *itB);
	}
}
