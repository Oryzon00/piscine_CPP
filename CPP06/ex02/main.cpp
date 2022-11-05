#include "Base.hpp"
#include <stdlib.h>
#include <time.h>
#include <iostream>
#include <exception>


Base*	generate(void)
{
	srand(time(NULL));
	if (rand() % 3 == 0)
	{
		std::cout << "Generating A" << std::endl;
		return (new A);
	}
	else if (rand() % 3 == 1)
	{
		std::cout << "Generating B" << std::endl;
		return (new B);
	}
	else
	{
		std::cout << "Generating C" << std::endl;
		return (new C);
	}
}

void	identify (Base* p)
{
	A*	test_a = dynamic_cast<A*>(p);
	B*	test_b = dynamic_cast<B*>(p);
	C*	test_c = dynamic_cast<C*>(p);

	if (test_a)
		std::cout << "The real type of pointeur is A" << std::endl;
	else if (test_b)
		std::cout << "The real type of pointeur is B" << std::endl;
	else if (test_c)
		std::cout << "The real type of pointeur is C" << std::endl;
}

void identify(Base& p) //interdiction d' utilise un pointeur
{
	try
	{
		A&	test_a = dynamic_cast<A&>(p);
		(void) test_a;
		std::cout << "The real type of reference is A" << std::endl;
	}
	catch(std::exception &e)
	{
		;
	}

	try
	{
		B&	test_b = dynamic_cast<B&>(p);
		(void) test_b;
		std::cout << "The real type of reference is B" << std::endl;
	}
	catch(std::exception &e)
	{
		;
	}

	try
	{
		C&	test_c = dynamic_cast<C&>(p);
		(void) test_c;
		std::cout << "The real type of reference is C" << std::endl;
	}
	catch(std::exception &e)
	{
		;
	}

	
}

int main(void)
{
	Base* test = generate();

	identify(test);
	identify(*test);
	delete test;
}
