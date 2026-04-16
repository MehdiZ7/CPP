/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:02:59 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 17:00:27 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	try
	{
		std::cout << " --------- TEST SHRUBBERY WORKING ------- " << std::endl << std::endl;
		Bureaucrat	test("BOB", 75);
		ShrubberyCreationForm form("hello");
		test.signForm(form);
		test.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << " --------- TEST SHRUBBERY FAILED ------- " << std::endl << std::endl;
		Bureaucrat	test("NOOB", 138);
		ShrubberyCreationForm form("hello");
		test.signForm(form);
		test.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << " --------- TEST ROBOTOMY WORKING ------- " << std::endl << std::endl;
		Bureaucrat	test("BOB", 42);
		RobotomyRequestForm form("Frankenstein");
		test.signForm(form);
		test.executeForm(form);
		std::cout << "---------CHECK THE 50% CHANCE ------------" << std::endl << std::endl;
		test.executeForm(form);
		test.executeForm(form);
		test.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << " --------- TEST ROBOTOMY FAILED ------- " << std::endl << std::endl;
		Bureaucrat	test("BOB", 71);
		RobotomyRequestForm form("Frankenstein");
		test.signForm(form);
		test.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << " --------- TEST PARDON WORKING ------- " << std::endl << std::endl;
		Bureaucrat	test("BOB", 4);
		PresidentialPardonForm form("OUIOUI");
		test.signForm(form);
		test.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	try
	{
		std::cout << " --------- TEST PARDON FAILED ------- " << std::endl << std::endl;
		Bureaucrat	test("BOB", 6);
		PresidentialPardonForm form("OUIOUI");
		test.signForm(form);
		test.executeForm(form);
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

}
