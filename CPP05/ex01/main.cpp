/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:02:59 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 12:57:00 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int	main(void)
{
	try {
		std::cout << "----- TEST GRADE TOO LOW -------" << std::endl;
		Form test("test", 151, 12);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl;
		std::cout << "----- TEST GRADE TOO HIGH -------" << std::endl;
		Form test("test", 70, 0);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl;
		std::cout << "----- TEST SIGNATURE WORKED -------" << std::endl;
		Bureaucrat	man("Macron", 50);
		Form test("test", 70, 60);
		std::cout << test << std::endl;
		man.signForm(test);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl;
		std::cout << "----- TEST SIGNATURE DIDNT WORKED -------" << std::endl;
		Bureaucrat	man("Macron", 50);
		Form test("test", 40, 60);
		std::cout << test << std::endl;
		man.signForm(test);
		std::cout << test << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << std::endl;
		std::cout << "----- TEST CANONIC FORM  -------" << std::endl;
		Bureaucrat	man("Macron", 50);
		Bureaucrat boy;
		Bureaucrat little("Jack", 70);
		little = man;
		boy = little;
		Form test("49.3", 1, 75);
		Form oups;
		Form aie(test);
		oups = test;
		test = aie;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
