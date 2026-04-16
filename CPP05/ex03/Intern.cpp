/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:02:51 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 17:52:33 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(void)
{
	std::cout << "An intern has been created" << std::endl;
}

Intern::~Intern(void)
{
	std::cout << "An intern has been deleted" << std::endl;
}

Intern::Intern(Intern const & base)
{
	(void)base;
	std::cout << "The Same intern has been created" << std::endl;
}

Intern &Intern::operator=(Intern const & base)
{
	(void)base;
	return (*this);
}


AForm* Intern::makeShrubbery(std::string target)
{
	return (new ShrubberyCreationForm(target));
}

AForm* Intern::makeRobotomy(std::string target)
{
	return (new RobotomyRequestForm(target));
}

AForm* Intern::makePresidential(std::string target)
{
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	std::string	levels[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	AForm* (Intern::*function[3])(std::string) = {
		&Intern::makeShrubbery, &Intern::makeRobotomy, &Intern::makePresidential};
	for (int i = 0; i < 3; i++)
	{
		if (name == levels[i])
		{
			std::cout << "Intern create " << name << std::endl;
			return ((this->*(function[i]))(target));
		}
	}
	std::cout << "Intern can't create form " << name << std::endl;
	return (NULL);
}
