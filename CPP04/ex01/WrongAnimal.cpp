/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:59:08 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 14:39:06 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void) : type("Unknown")
{
	std::cout << "An unknown type of WrongAnimal has been created."<< std::endl;
}
WrongAnimal::~WrongAnimal(void)
{
	std::cout << "An WrongAnimal " << this->type << " has been deleted." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) : type(type)
{
	std::cout << "An WrongAnimal " << this->type << " has been created." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal & base) : type(base.type)
{
	std::cout << "An WrongAnimal " << base.type << " has been created by copy." << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal & base)
{
	if (this != &base)
	{
		this->type = base.type;
	}
	std::cout << "An WrongAnimal " << base.type<< " replaced an existing animal" << std::endl;
 	return (*this);
}

std::string WrongAnimal::getType(void)const
{
	return (this->type);
}

void WrongAnimal::makeSound(void)const
{
	std::cout << "Hello Sir !" << std::endl;
}
