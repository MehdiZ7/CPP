/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:02:59 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 17:49:29 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"
#include <cstdlib>
#include <ctime>

int	main(void)
{
	std::srand(static_cast<unsigned int>(std::time(NULL)));

	Intern mehdi;

	std::cout << "------- TEST INTERN MAKE FORM -------- "<< std::endl;
	AForm* first = mehdi.makeForm("shrubbery creation", "hello");
	AForm* second = mehdi.makeForm("robotomy request", "aouch");
	AForm* third = mehdi.makeForm("presidential pardon", "Nobody");
	AForm* failed = mehdi.makeForm("unknown", "test");


	std::cout << "------- TEST WORKING FORMS -------- "<< std::endl;

	Bureaucrat bob("Boss", 1);
	bob.signForm(*second);
	bob.executeForm(*second);

	delete first;
	delete second;
	delete third;
	delete failed;
}
