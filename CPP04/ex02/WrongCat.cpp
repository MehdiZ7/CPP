/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:59:43 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 14:30:12 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "A " << this->type << " has been created." << std::endl;
}

WrongCat::~WrongCat(void)
{
	std::cout << "A " << this->type << " has been deleted." << std::endl;
}

WrongCat::WrongCat(const WrongCat & base) : WrongAnimal(base)
{
	std::cout << "A copy of " << base.type << "has been created." << std::endl;
}

WrongCat &WrongCat::operator=(const WrongCat & base)
{
	if (this != &base)
		this->type = base.type;
	return (*this);
}

void WrongCat::makeSound(void)const
{
	std::cout << "Miaouuu" << std::endl;
}
