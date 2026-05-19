/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:29:22 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 13:49:08 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "A " << this->type << " has been created." << std::endl;
}

Cat::~Cat(void)
{
	std::cout << "A " << this->type << " has been deleted." << std::endl;
}

Cat::Cat(const Cat & base) : Animal(base)
{
	std::cout << "A copy of " << base.type << "has been created." << std::endl;
}

Cat &Cat::operator=(const Cat & base)
{
	if (this != &base)
		this->type = base.type;
	return (*this);
}

void Cat::makeSound(void)const
{
	std::cout << "Miaouuu" << std::endl;
}
