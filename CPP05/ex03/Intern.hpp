/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 17:02:48 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 17:23:59 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP

#include <iostream>
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern
{
	public:
		Intern(void);
		~Intern(void);
		Intern(Intern const & base);
		Intern &operator=(Intern const & base);

		AForm* makeForm(std::string name, std::string target);

	private:
		AForm* makeShrubbery(std::string target);
		AForm* makeRobotomy(std::string target);
		AForm* makePresidential(std::string target);

};

#endif
