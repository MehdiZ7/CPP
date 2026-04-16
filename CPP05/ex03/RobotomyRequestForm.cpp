/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:06:51 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 15:44:29 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("Robotomy", 72, 45), _target ("Unknown")
{
	std::cout << *this << " has been created." << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << *this << " has been deleted." << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), _target (target)
{
	std::cout << *this << " has been created."<< std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & base) : AForm(base.getName(), 72, 45), _target(base.getTarget())
{
	std::cout << *this << " has been created by copy."<< std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const & base)
{
	if (this != &base)
	{
		this->_target = base.getTarget();
		std::cout << *this << " target has been replaced by " << base << std::endl;
	}
	return (*this);
}

std::string RobotomyRequestForm::getTarget(void) const
{
	return (this->_target);
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	this->verifyRights(executor);
	std::cout << "Brrrrr Zzzzzzzz Br zZ " << std::endl;
	if (std::rand() % 2 == 0)
		std::cout << this->_target << " has been robotomized successfully !" << std::endl;
	else
		std::cout << this->_target << " robotomisation has failed !" << std::endl;
}
