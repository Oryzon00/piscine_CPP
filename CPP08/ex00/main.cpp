#include "easyfind.hpp"
#include <iostream>
#include <vector>

void	test1(void)
{
		std::cout << "test 1" <<std::endl;

	std::vector<int> vect;
	vect.push_back(1);
	vect.push_back(2);
	vect.push_back(3);
	vect.push_back(4);
	vect.push_back(5);

	std::cout << "Search for 3: " << *easyfind(vect, 3) << std::endl;
	std::cout << "Search for 5: " << *easyfind(vect, 5) << std::endl;
	std::cout << "Search for 42: " << *easyfind(vect, 42) << std::endl;
}


int main(void)
{
	try
	{
		test1();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
