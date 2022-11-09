#include "iter.hpp"
#include <iterator>
#include <string>

int	main(void)
{
	int tab1[] = {1, 2, 3, 4, 5};
	std::string	tab2[] = {"un", "deux", "trois", "quatre", "cinq"};


	iter(tab1, 5, print<int>);
	iter(tab2, 5, print<std::string>);
}
