/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:48:09 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/26 13:27:21 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include "ICharacter.hpp"

Cure::Cure(void) : AMateria("cure")
{}

Cure::~Cure(void)
{}

Cure::Cure(const Cure & base) : AMateria(base)
{}

Cure &Cure::operator=(const Cure & base)
{
	(void)base;
	return (*this);
}

Cure *Cure::clone(void)const
{
	Cure* ret = new Cure(*this);
	return (ret);
}

void Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName()<< "'s wounds *"<< std::endl;
}
