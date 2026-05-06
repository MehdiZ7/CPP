/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:50:38 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/30 13:54:54 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <ctime>

int my_random(void)
{
	return (std::rand() % 100000);
}

int main()
{
	std::srand(std::time(NULL));
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span giga(100000);
	std::cout << " A giga Span who can containe 100 000 has been created" << std::endl;
	std::cout << "---------------------------------" << std::endl;
	std::vector<int> random(500000);
	std::generate(random.begin(), random.end(), my_random);
	std::cout << "A vector of 500 000 random int has been created" << std::endl;
	std::cout << "------------------------------" << std::endl;
	giga.addNumber(random.begin(), random.begin() + 50000);
	std::cout << "We add 50 000 numbers from our vector to our giga span" << std::endl;
	std::cout << "In this 50 000 numbers: " << std::endl;
	std::cout << "The shortest span is: " << giga.shortestSpan() << std::endl;
	std::cout << "The longest Span is: " << giga.longestSpan() << std::endl;
	std::cout << "------------------------------"<< std::endl;
	giga.addNumber(random.begin() + 50000, random.begin() + 99999);
	std::cout << "We add 49 999 numbers from our vector to our giga span" << std::endl;
	std::cout << "In this 99 999 numbers: " << std::endl;
	std::cout << "The shortest span is: " << giga.shortestSpan() << std::endl;
	std::cout << "The longest Span is: " << giga.longestSpan() << std::endl;
	std::cout << "------------------------------"<< std::endl;
	giga.addNumber(random.begin() + 99999, random.begin() + 100000);
	std::cout << "We add 1 number from our vector to our giga span" << std::endl;
	std::cout << "In this 100 000 numbers: " << std::endl;
	std::cout << "The shortest span is: " << giga.shortestSpan() << std::endl;
	std::cout << "The longest Span is: " << giga.longestSpan() << std::endl;
	std::cout << "------------------------------"<< std::endl;
	try
	{
	std::cout << "We try to add 1 more number" << std::endl;
	giga.addNumber(random.begin() + 100000, random.begin() + 100001);
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout <<"---------------------------------------"<< std::endl;
	std::cout << "Creation of a span of 1 number " << std::endl;
	Span mini(1);
	mini.addNumber(5);
	try
	{
		std::cout << mini.shortestSpan() << std::endl;
		std::cout << mini.longestSpan() << std::endl;
	}
	catch (std::exception & e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}
