/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:33:47 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 16:58:00 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(void) : _name("Unknown"), _signed(false), _gradeSigned(150), _gradeExec(150)
{
	std::cout<< *this << " has been created" << std::endl;
}

AForm::~AForm(void)
{}

AForm::AForm(std::string name, int nbSigned, int exec) : _name(name), _signed(false), _gradeSigned(nbSigned), _gradeExec(exec)
{
	if (nbSigned < 1 || exec < 1)
		throw(GradeTooHighException());
	else if (nbSigned > 150 || exec > 150)
		throw(GradeTooLowException());
}

AForm::AForm(const AForm &base) : _name(base._name), _signed(base._signed), _gradeSigned(base._gradeSigned), _gradeExec(base._gradeExec)
{
}

AForm &AForm::operator=(const AForm & base)
{
	if (this != &base)
		this->_signed = base._signed;
	return (*this);
}

std::string AForm::getName(void) const
{
	return (this->_name);
}

bool AForm::getBoolSigned(void) const
{
	return (this->_signed);
}

int	AForm::getGradeSigned(void)const
{
	return (this->_gradeSigned);
}

int AForm::getGradeExec(void)const
{
	return (this->_gradeExec);
}

std::ostream &operator<<(std::ostream & out, AForm const & rhs)
{
	out << "Form " << rhs.getName()
		<< ", status: " << (rhs.getBoolSigned() ? "signed" : "not signed")
		<< ", sign grade: " << rhs.getGradeSigned()
		<< ", exec sign: " << rhs.getGradeExec();
	return (out);
}

const char * AForm::GradeTooHighException::what() const throw()
{
	return ("Grade too high.");
}

const char * AForm::GradeTooLowException::what() const throw()
{
	return ("Grade too low.");
}

void AForm::beSigned(Bureaucrat const & worker)
{
	if (this->_gradeSigned < worker.getGrade())
		throw AForm::GradeTooLowException();
	else
		this->_signed = true;
}

const char * AForm::FormNotSignedException::what() const throw()
{
	return ("This form is not signed");
}

void	AForm::verifyRights(Bureaucrat const & executor) const
{
	if (!AForm::getBoolSigned())
		throw AForm::FormNotSignedException();
	if (executor.getGrade() > this->_gradeExec)
		throw AForm::GradeTooLowException();
}
