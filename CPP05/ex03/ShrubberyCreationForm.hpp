/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:56:47 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 16:48:47 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_HPP
#define SHRUBBERY_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm
{
	public:
	ShrubberyCreationForm(void);
	~ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm const & base);
	ShrubberyCreationForm &operator=(ShrubberyCreationForm  const & base);

	void execute(Bureaucrat const & executor) const;
	std::string getTarget(void) const ;

	private:
		std::string	_target;
};

#endif
