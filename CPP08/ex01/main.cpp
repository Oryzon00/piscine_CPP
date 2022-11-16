#include "Span.hpp"



void	test1(void)
{
	std::cout << std::endl;
	std::cout << "Test 1" << std::endl;
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	test2(void)
{
	std::cout << std::endl;
	std::cout << "Test 2" << std::endl;
	Span sp =			Span(100);
	std::vector<int>	test;
	test.insert(test.end(), 100, 42);
	sp.fillSpan(test.begin(), test.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	test3(void)
{
	std::cout << std::endl;
	std::cout << "Test 3" << std::endl;
	Span sp =			Span(100);
	std::vector<int>	test;
	test.insert(test.end(), 1000, 42);
	sp.fillSpan(test.begin(), test.end());
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

void	test4(void)
{
	std::cout << std::endl;
	std::cout << "Test 4" << std::endl;
	Span sp = Span(0);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;
}

int main()
{
	try
	{
		test1();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		test2();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		test3();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	try
	{
		test4();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	return 0;
}
