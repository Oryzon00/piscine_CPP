# pragma once

# include <string>
# include <exception>
# include <vector>
# include <deque>
# include <iostream>

#pragma once

#include <string>
#include <iostream>

class PmergeMe
{
	private:
		typedef std::vector<size_t>		vec_t;
		typedef	std::deque<size_t>		deque_t;

		int			_ac;
		char**		_av;
		vec_t		_vector;
		deque_t		_deque;

	public:
		PmergeMe(void);
		PmergeMe(PmergeMe const &src);
		PmergeMe(int ac, char** av);
		~PmergeMe(void);

		PmergeMe&	operator=(PmergeMe const &rhs);

		void	affVector();
		void	affDeque();

	private:

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
