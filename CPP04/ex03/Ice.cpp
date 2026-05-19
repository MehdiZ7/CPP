/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:48:14 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/26 13:26:29 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include "ICharacter.hpp"

Ice::Ice(void) : AMateria("ice")
{}

Ice::~Ice(void)
{}
Ice::Ice(const Ice &base) : AMateria(base)
{}

Ice &Ice::operator=(const Ice & base)
{
	(void)base;
	return (*this);
}

Ice *Ice::clone(void)const
{
	Ice* ret = new Ice(*this);
	return (ret);
}

void Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName()<< " *"<< std::endl;
}
