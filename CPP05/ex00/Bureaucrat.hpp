/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/14 12:03:03 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/14 16:14:45 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <exception>

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
