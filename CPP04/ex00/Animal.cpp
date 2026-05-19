/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:29:18 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 13:43:59 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : type("Unknown")
{
	std::cout << "An unknown type of Animal has been created."<< std::endl;
}
Animal::~Animal(void)
{
	std::cout << "An Animal " << this->type << " has been deleted." << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
	std::cout << "An Animal " << this->type << " has been created." << std::endl;
}

Animal::Animal(const Animal & base) : type(base.type)
{
	std::cout << "An Animal " << base.type << " has been created by copy." << std::endl;
}

Animal &Animal::operator=(const Animal & base)
{
	if (this != &base)
	{
		this->type = base.type;
	}
	std::cout << "An Animal " << base.type<< " replaced an existing animal" << std::endl;
 	return (*this);
}

std::string Animal::getType(void)const
{
	return (this->type);
}

void Animal::makeSound(void)const
{
	std::cout << "Hello Sir !" << std::endl;
}
