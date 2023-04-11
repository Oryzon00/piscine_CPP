# pragma once

# include <string>
# include <exception>
# include <iostream>

# include <cstdlib>
# include <climits>
# include <ctime>

# include <vector>
# include <deque>
# include <utility>
# include <algorithm>

#pragma once

#include <string>
#include <iostream>

class PmergeMe
{
	private:
		typedef	unsigned int				u_int;
		typedef std::vector<u_int>			vec_t;
		typedef	std::deque<u_int>			deque_t;
		typedef	std::pair<u_int, u_int>		pair_t;
		typedef	std::vector<pair_t>			vec_pair_t;
		typedef	std::deque<pair_t>			deque_pair_t;

		int				_ac;
		char**			_av;
		bool			_odd;

		u_int			_alone_vec;
		vec_t			_vec_parse;
		vec_pair_t		_vec_pair;
		vec_t			_vec_A;
		vec_t			_vec_B;

		u_int			_alone_deque;
		deque_t			_deque_parse;
		deque_pair_t	_deque_pair;
		deque_t			_deque_A;
		deque_t			_deque_B;

		double			_time_vec;
		double			_time_deque;
		
	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const &src);
		PmergeMe(int ac, char** av);
		~PmergeMe(void);

		PmergeMe&	operator=(PmergeMe const &rhs);

		void	sortVector(void);
		void	sortDeque(void);

		void	showUnsorted(void);
		void	showSorted(void);
		void	showTimeVector(void);
		void	showTimeDeque(void);

	private:
		/* VECTOR */
		void	parseDataVec(void);
		void	makePairsVec(void);
		void	sortPairsMemberVec(void);
		void	sortPairsVec(void);
		void	RecursiveSortPairsVec(size_t n);
		void	makeChainsVec(void);
		void	InsertIntoMainChainVec(void);

		/* DEQUE */
		void	parseDataDeque(void);
		void	makePairsDeque(void);
		void	sortPairsMemberDeque(void);
		void	sortPairsDeque(void);
		void	RecursiveSortPairsDeque(size_t n);
		void	makeChainsDeque(void);
		void	InsertIntoMainChainDeque(void);

		/* DEBUG */
		void	affVector(vec_t &vector);
		void	affVector(vec_pair_t &vector);
		void	affDeque(deque_t &deque);
		void	affDeque(deque_pair_t &deque);

		void	clearVector(vec_t& vector);
		void	clearVector(vec_pair_t vector);
		void	clearDeque(deque_t& deque);
		void	clearDeque(deque_pair_t & deque);


};

/*----------------------------------------------------------------------------*/


class CustomException : public std::exception
{
	std::string	_msg;

	public:
		CustomException(const std::string str)
			: _msg(std::string("Error: " + str))	{}

		~CustomException() throw()	{}

		virtual const char*	what(void) const throw()
		{
			return _msg.c_str();
		}
};
