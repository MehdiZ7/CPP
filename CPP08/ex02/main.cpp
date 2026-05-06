/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 16:46:28 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/06 13:10:16 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>


int main()
{
	std::cout << "---- Test from the subject --------" << std::endl;
	MutantStack<int> mstack;
	mstack.push(5);
	mstack.push(17);
	std::cout << mstack.top() << std::endl;
	mstack.pop();
	std::cout << mstack.size() << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
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

	std::cout << "Comparaison with a list" << std::endl;

	std::list<int> lstack;
	lstack.push_back(5);
	lstack.push_back(17);
	std::cout << lstack.back() << std::endl;
	lstack.pop_back();
	std::cout << lstack.size() << std::endl;
	lstack.push_back(3);
	lstack.push_back(5);
	lstack.push_back(737);
	lstack.push_back(0);
	std::list<int>::iterator lit = lstack.begin();
	std::list<int>::iterator lite = lstack.end();
	++lit;
	--lit;
	while (lit != lite)
	{
		std::cout << *lit << std::endl;
		++lit;
	}

	std::cout << std::endl;
	std::cout << "--- My tests -----" << std::endl;
	std::cout << "--- test reverse iterator ---" << std::endl;

	MutantStack<int>::reverse_iterator rit = mstack.rbegin();
	MutantStack<int>::reverse_iterator rite = mstack.rend();

	while (rit != rite)
	{
		std::cout << *rit << std::endl;
		++rit;
	}

	std::cout << "---- test reverse const iterator ---- " << std::endl;
	MutantStack<int>::const_reverse_iterator crit = mstack.rbegin();
	MutantStack<int>::const_reverse_iterator crite = mstack.rend();

	while (crit != crite)
	{
		std::cout << *crit << std::endl;
		// Dear evaluator, uncomment to watch it burn
		//*crit = 42;
		++crit;
	}

	std::cout << "---- test const iterator ----" << std::endl;

	MutantStack<int>::const_iterator cit = mstack.begin();
	MutantStack<int>::const_iterator cite = mstack.end();

	while (cit != cite)
	{
		std::cout << *cit << std::endl;
		//same here
		//*cit = 42;
		++cit;
	}

	std::cout << "----- test orthodox canonical form -----" << std::endl;

	MutantStack<int> copy(mstack);
	std::cout << "size of original: " << mstack.size() << std::endl;
	std::cout << "size of copy: " << copy.size()<< std::endl;

	MutantStack<int> equal;
	equal = mstack;

	std::cout << "size of equal: " << equal.size() << std::endl;
	std::cout << "we add a number to the original to test the deep copy" << std::endl;
	mstack.push(42);
	std::cout << "size of original: " << mstack.size() << std::endl;
	std::cout << "size of equal: " << equal.size() << std::endl;

	return 0;
}
