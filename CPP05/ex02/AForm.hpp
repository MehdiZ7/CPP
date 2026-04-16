/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 16:33:51 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 12:43:13 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>

class Bureaucrat;

class AForm
{
	public:
		AForm(void);
		virtual ~AForm(void);
		AForm(std::string name, int nbSigned, int exec);
		AForm(const AForm & base);
		AForm &operator=(const AForm & base);

		std::string getName(void) const;
		bool getBoolSigned(void) const;
		int	getGradeSigned(void) const;
		int getGradeExec(void) const;

		void beSigned(Bureaucrat const & worker);

		virtual void execute(Bureaucrat const & executor) const = 0;
		void	verifyRights(Bureaucrat const & executor) const;
		class GradeTooHighException : public std::exception
		{
			public:
			virtual const char * what() const throw();
		};

		class GradeTooLowException : public std::exception
		{
			public:
			virtual const char * what() const throw();
		};

		class FormNotSignedException : public std::exception
		{
			public:
			virtual const char * what() const throw();
		};

	private:
		const std::string	_name;
		bool		_signed;
		const int	_gradeSigned;
		const int	_gradeExec;
};

std::ostream &operator<<(std::ostream &out, AForm const & rhs);

#endif
