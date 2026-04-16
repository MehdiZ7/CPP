/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:03:03 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 12:42:07 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include "Form.hpp"

class Bureaucrat
{

	public:
	Bureaucrat(void);
	Bureaucrat(std::string name, int grade);
	~Bureaucrat(void);
	Bureaucrat(const Bureaucrat &base);
	Bureaucrat &operator=(const Bureaucrat &base);

	std::string getName(void) const;
	int	getGrade(void) const;

	void	incrementGrade(void);
	void	decrementGrade(void);

	void	signForm(Form & paper);

	class GradeTooHighException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	class GradeTooLowException : public std::exception
	{
		public:
		virtual const char* what() const throw();
	};

	private:
		const std::string	_name;
		int					_grade;
};

std::ostream &operator<<(std::ostream &out, Bureaucrat const & rhs);

#endif
