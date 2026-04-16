/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:33:47 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 12:44:08 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void) : _name("Unknown"), _signed(false), _gradeSigned(150), _gradeExec(150)
{
	std::cout<< *this << " has been created" << std::endl;
}

Form::~Form(void)
{}

Form::Form(std::string name, int nbSigned, int exec) : _name(name), _signed(false), _gradeSigned(nbSigned), _gradeExec(exec)
{
	if (nbSigned < 1 || exec < 1)
		throw(GradeTooHighException());
	else if (nbSigned > 150 || exec > 150)
		throw(GradeTooLowException());
	else
		std::cout << *this << " has been created" << std::endl;
}

Form::Form(const Form &base) : _name(base._name), _signed(base._signed), _gradeSigned(base._gradeSigned), _gradeExec(base._gradeExec)
{
	std::cout << *this << " has been created by copy" << std::endl;
}

Form &Form::operator=(const Form & base)
{
	if (this != &base)
		this->_signed = base._signed;
	std::cout << *this << " is as signed as " << base << std::endl;
	return (*this);
}

std::string Form::getName(void) const
{
	return (this->_name);
}

bool Form::getBoolSigned(void) const
{
	return (this->_signed);
}

int	Form::getGradeSigned(void)const
{
	return (this->_gradeSigned);
}

int Form::getGradeExec(void)const
{
	return (this->_gradeExec);
}

std::ostream &operator<<(std::ostream & out, Form const & rhs)
{
	out << "Form " << rhs.getName()
		<< ", status: " << (rhs.getBoolSigned() ? "signed" : "not signed")
		<< ", sign grade: " << rhs.getGradeSigned()
		<< ", exec sign: " << rhs.getGradeExec();
	return (out);
}

const char * Form::GradeTooHighException::what() const throw()
{
	return ("Grade Form too high.");
}

const char * Form::GradeTooLowException::what() const throw()
{
	return ("Grade form too low.");
}

void Form::beSigned(Bureaucrat const & worker)
{
	if (this->_gradeSigned < worker.getGrade())
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}
