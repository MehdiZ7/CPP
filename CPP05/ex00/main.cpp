/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:02:59 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/14 16:21:29 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	try
	{
		std::cout << "Test 1 : Bob is grade 160"<< std::endl;
		Bureaucrat	test("bob", 160);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {

		Bureaucrat bob("Ted", 150);
		std::cout << "Test 2 : decrement Ted's grade"<< std::endl;
		bob.decrementGrade();
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try {
		std::cout << "Test 3 : Canonical form"<< std::endl;
		Bureaucrat bob("Mich", 75);
		Bureaucrat test(bob);
		Bureaucrat man;
		man = bob;
		std::cout << "Test 4 : Overload Ostream"<< std::endl;
		std::cout << man << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
