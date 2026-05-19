/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:29:25 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 17:13:04 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->mind = new Brain();
	std::cout << "A " << this->type << " has been created." << std::endl;
}

Dog::~Dog(void)
{
	delete this->mind;
	std::cout << "A " << this->type << " has been deleted." << std::endl;
}

Dog::Dog(const Dog & base) : Animal(base)
{
	this->mind = new Brain(*(base.mind));
	std::cout << "A copy of " << base.type << "has been created." << std::endl;
}

Dog &Dog::operator=(const Dog & base)
{
	if (this != &base)
	{
		this->type = base.type;
		*(this->mind) = *(base.mind);
	}
	return (*this);
}

void Dog::makeSound(void)const
{
	std::cout << "Ouaf Ouaf" << std::endl;
}

void Dog::setMind(int index, std::string thought)
{
	this->mind->setIdea(index, thought);
}

std::string Dog::getMind(int index)const
{
	return (this->mind->getIdea(index));
}
