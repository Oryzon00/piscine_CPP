#include "MutantStack.hpp"
#include <list>


void	test_3(void)
{
	std::cout << "List comparaison test" << std:: endl << std::endl;
	
	std::list<int> lst;
	lst.push_back(5);
	lst.push_back(17);
	std::cout << lst.back() << std::endl;
	std::cout << lst.size() << std::endl;
	lst.pop_back();
	std::cout << lst.size() << std::endl;

	lst.push_back(3);
	lst.push_back(5);
	lst.push_back(737);
	//[...]
	lst.push_back(0);

	std::list<int>::iterator it = lst.begin();
	std::list<int>::iterator ite = lst.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::cout << std::endl;
}

void	test_2(void)
{
	std::cout << "Mutant stack test" << std:: endl << std::endl;

	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	std::cout << mstack.size() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	//[...]
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);
	std::cout << std::endl;
}

void	test_1(void)
{
	std::cout << "Basic test" << std::endl << std::endl;

	MutantStack<int> mutant;
	for (int i = 0; i < 20; i++)
		mutant.push(i);
	
	while(mutant.size())
	{
		std::cout << mutant.top() << std::endl;
		mutant.pop();
	}
	std::cout << std::endl;
}

int main()
{
	test_1();
	test_2();
	test_3();

	return 0;
}
