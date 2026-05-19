/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:48:05 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/26 16:35:45 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"

AMateria::AMateria(std::string const & type) : _type(type)
{}

AMateria::~AMateria(void)
{}

AMateria::AMateria(void) : _type("")
{}

AMateria::AMateria(const AMateria & base) : _type(base._type)
{}

AMateria &AMateria::operator=(const AMateria & base)
{
	(void)base;
	return (*this);
}

std::string const &AMateria::getType(void) const
{
	return (this->_type);
}

void AMateria::use(ICharacter & target)
{
	(void)target;
	std::cout << "* Useless Action *"<< std::endl;
}
