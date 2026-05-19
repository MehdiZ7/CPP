/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:29:25 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 13:48:58 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";

	std::cout << "A " << this->type << " has been created." << std::endl;
}

Dog::~Dog(void)
{
	std::cout << "A " << this->type << " has been deleted." << std::endl;
}

Dog::Dog(const Dog & base) : Animal(base)
{
	std::cout << "A copy of " << base.type << "has been created." << std::endl;
}

Dog &Dog::operator=(const Dog & base)
{
	if (this != &base)
		this->type = base.type;
	return (*this);
}

void Dog::makeSound(void)const
{
	std::cout << "Ouaf Ouaf" << std::endl;
}
