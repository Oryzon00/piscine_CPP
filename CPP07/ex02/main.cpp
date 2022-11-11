#include "Array.hpp"

int main(void)
{
	try
	{
		Array<int> test = Array<int>(2);
		std::cout << "size of array: " << test.size() << std::endl;;
		for (int i = 0; i < 3; i++)
			std::cout << test[i] << std::endl;;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	

	
}
