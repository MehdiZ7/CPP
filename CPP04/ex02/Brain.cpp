/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:08:56 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 17:01:47 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"


Brain::Brain(void)
{
	for (int i = 0; i < 100; i++)
		_ideas[i] = "idea" ;
	std::cout << "A brain has been created" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "A brain has been deleted" << std::endl;
}

Brain::Brain(const Brain & base)
{
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = base._ideas[i];
	std::cout << "A brain has been created by copy" << std::endl;
}

Brain &Brain::operator=(const Brain & base)
{
	if (this != &base)
	{
		for (int i = 0; i < 100; i++)
			this->_ideas[i] = base._ideas[i];
		std::cout << "A brain has been replaced by another brain" << std::endl;
	}
	return (*this);
}

void Brain::setIdea(int index, std::string idea)
{
	this->_ideas[index] = idea;
}

std::string Brain::getIdea(int index)const
{
	return (this->_ideas[index]);
}
