/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:17:03 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/05 16:09:36 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <list>

int main (void)
{
	std::vector<int> v(6, 42);
	std::vector<int>::iterator it;
	try
	{
		std::cout << "--- test : searching for the value 42 ----"<< std::endl;
		it = easyfind(v, 42);
		std::cout << "The value " << *it << " has been found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "--- test : searching for the value 43 ----"<< std::endl;
		it = easyfind(v, 43);
		std::cout << "The value " << *it << " has been found" << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::list<int> l(6,42);
	std::list<int>::iterator lit;
	try
	{
		std::cout << "----- test: searcher in a list the value 42 ----" << std::endl;
		lit = easyfind(l, 42);
		std::cout << "The value " << *it << " has been found in the list" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "----- test: searcher in a list the value 43 ----" << std::endl;
		lit = easyfind(l, 43);
		std::cout << "The value " << *it << " has been found in the list" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}

	return (0);
}
