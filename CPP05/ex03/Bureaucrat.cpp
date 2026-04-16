/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:03:01 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 16:36:12 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat(void) : _name("John Doe"), _grade(150)
{
	std::cout << *this << " has been created" << std::endl;
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << *this << " has been deleted" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name), _grade(grade)
{
	if (_grade > 150)
		throw(GradeTooLowException());
	else if (_grade < 1)
		throw(GradeTooHighException());
	else
		std::cout << *this << "has been created" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &base) : _name(base._name), _grade(base._grade)
{
	if (_grade > 150)
		throw(GradeTooLowException());
	else if (_grade < 1)
		throw(GradeTooHighException());
	else
		std::cout << *this << "has been created by copy" << std::endl;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat & base)
{
	if (this != &base)
	{
		_grade = base._grade;
		std::cout << *this << " took " << base << " grade"<< std::endl;
	}
	return (*this);
}

std::string Bureaucrat::getName(void) const
{
	return (this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high");
}

const char * Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low");
}

void Bureaucrat::incrementGrade(void)
{
	if (this->_grade - 1 < 1)
		throw(GradeTooHighException());
	else
	{
		this->_grade--;
		std::cout << *this << " gained one grade"<< std::endl;
	}

}

void Bureaucrat::decrementGrade(void)
{
	if (this->_grade + 1 > 150)
		throw(GradeTooLowException());
	else
	{
		this->_grade++;
		std::cout << *this << " lost one grade"<< std::endl;
	}
}

std::ostream &operator<<(std::ostream &out, Bureaucrat const & rhs)
{
	out << rhs.getName() << ", bureaucrat grade " << rhs.getGrade() << ".";
	return (out);
}

void Bureaucrat::signForm(AForm &paper)
{
	try
	{
		paper.beSigned(*this);
		std::cout << this->_name << " signed " << paper.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->_name << " couldn't sign " << paper.getName() << " because " << e.what() << std::endl;
	}
}

void Bureaucrat::executeForm(AForm const & paper) const
{
	try 
	{
		paper.execute(*this);
		std::cout << this->_name << " executed " << paper.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Form can't be executed. " << e.what() << std::endl;
	}
}




