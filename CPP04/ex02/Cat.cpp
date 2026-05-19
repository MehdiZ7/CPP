/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:29:22 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 17:11:35 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->mind = new Brain();
	std::cout << "A " << this->type << " has been created." << std::endl;
}

Cat::~Cat(void)
{
	delete this->mind;
	std::cout << "A " << this->type << " has been deleted." << std::endl;
}

Cat::Cat(const Cat & base) : Animal(base)
{
	this->mind = new Brain(*(base.mind));
	std::cout << "A copy of " << base.type << "has been created." << std::endl;
}

Cat &Cat::operator=(const Cat & base)
{
	if (this != &base)
	{
		this->type = base.type;
		*(this->mind) = *(base.mind);
	}
	return (*this);
}

void Cat::makeSound(void)const
{
	std::cout << "Miaouuu" << std::endl;
}

void Cat::setMind(int index, std::string thought)
{
	this->mind->setIdea(index, thought);
}

std::string Cat::getMind(int index)const
{
	return (this->mind->getIdea(index));
}
