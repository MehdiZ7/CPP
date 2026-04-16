/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:34:39 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 16:30:43 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyForm", 145, 137), _target("Unknown")
{
	std::cout << *this << " has been created."<<std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << *this << " has been deleted." << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyForm", 145, 137), _target(target)
{
	std::cout << *this << " has been created." << std::endl;
}
ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & base) : AForm(base.getName(), 145, 137), _target(base.getTarget())
{
	std::cout << *this << " has been created by copy" << std::endl;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const & base)
{
	if (this != &base)
	{
		this->_target = base.getTarget();
		std::cout << *this << " target has been replaced by " << base << std::endl;
	}
	return (*this);
}

std::string ShrubberyCreationForm::getTarget(void) const
{
	return (this->_target);
}

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	name;
	name = this->_target + "_shrubbery";
	this->verifyRights(executor);
	std::ofstream	file(name.c_str());
	if (file.is_open())
	{
		file << "       _-_" << std::endl
			 << "    /~~   ~~\\" << std::endl
			 << " /~~         ~~\\" << std::endl
			 << "{               }" << std::endl
			 << " \\  _-     -_  /" << std::endl
			 << "   ~  \\\\ //  ~" << std::endl
			 << "_- -   | | _- _" << std::endl
			 << "  _ -  | |   -_" << std::endl
			 << "      // \\\\" << std::endl;
		file.close();
	}
	else
		std::cout << "Error while creating the tree" << std::endl;
}

