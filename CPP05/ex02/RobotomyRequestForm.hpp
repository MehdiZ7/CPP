/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:56:45 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 14:15:04 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_HPP
#define ROBOTOMY_HPP

#include "AForm.hpp"
#include "Bureaucrat.hpp"

class RobotomyRequestForm : public AForm
{
	public:
	RobotomyRequestForm(void);
	~RobotomyRequestForm(void);
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm const & base);
	RobotomyRequestForm &operator=(RobotomyRequestForm  const & base);

	void execute(Bureaucrat const & executor) const;
	std::string getTarget(void) const ;

	private:
		std::string	_target;
};

#endif
