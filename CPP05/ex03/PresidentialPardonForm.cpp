/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 14:27:15 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 15:41:30 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PardonForm", 25, 5), _target("Unknown")
{
	std::cout << *this << " has been created."<<std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << *this << " has been deleted." << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PardonForm", 25, 5), _target(target)
{
	std::cout << *this << " has been created." << std::endl;
}
PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & base) : AForm(base.getName(), 25,5), _target(base.getTarget())
{
	std::cout << *this << " has been created by copy" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const & base)
{
	if (this != &base)
	{
		this->_target = base.getTarget();
		std::cout << *this << " target has been replaced by " << base << std::endl;
	}
	return (*this);
}

std::string PresidentialPardonForm::getTarget(void) const
{
	return (this->_target);
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	this->verifyRights(executor);
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}
