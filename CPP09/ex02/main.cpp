#include "PmergeMe.hpp"


int	main(int ac, char** av)
{
	try
	{
		PmergeMe	algo(ac, av);

		algo.affVector();
		algo.affVector();
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
		return (1);
	}
	return (0);
	//Your program must use a merge-insert sort algorithm to sort the positive integer
	//sequence.
}
