/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
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

class Form
{
	public:
		Form(void);
		~Form(void);
		Form(std::string name, int nbSigned, int exec);
		Form(const Form & base);
		Form &operator=(const Form & base);

		std::string getName(void) const;
		bool getBoolSigned(void) const;
		int	getGradeSigned(void) const;
		int getGradeExec(void) const;

		void beSigned(Bureaucrat const & worker);

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

	private:
		const std::string	_name;
		bool		_signed;
		const int	_gradeSigned;
		const int	_gradeExec;
};

std::ostream &operator<<(std::ostream &out, Form const & rhs);

#endif
