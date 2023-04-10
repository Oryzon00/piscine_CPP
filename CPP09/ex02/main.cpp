#include "PmergeMe.hpp"


int	main(int ac, char** av)
{
	try
	{
		PmergeMe	algo(ac, av);

		algo.sortVector();
		algo.sortDeque();
		algo.showTimeVector();
		algo.showTimeDeque();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		return (1);
	}
	return (0);
}
