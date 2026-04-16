/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 13:56:29 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/15 14:27:06 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_HPP
#define PRESIDENTIAL_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public:
	PresidentialPardonForm(void);
	~PresidentialPardonForm(void);
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm const & base);
	PresidentialPardonForm &operator=(PresidentialPardonForm  const & base);

	void execute(Bureaucrat const & executor) const;
	std::string getTarget(void) const ;

	private:
		std::string	_target;
};

#endif
