/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 13:32:21 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/26 15:45:14 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "AMateria.hpp"

Character::Character(void) : _name("Unknown")
{
	for (int i = 0; i < 4; i++)
		this->_objs[i] = NULL;
}

Character::~Character(void)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_objs[i] != NULL)
			delete this->_objs[i];
	}
}

Character::Character(std::string const &name) : _name(name)
{
	for (int i = 0 ; i < 4; i++)
		this->_objs[i] = NULL;
}

Character::Character(Character const & base) : _name(base._name)
{
	for (int i = 0; i < 4; i++)
	{
		if (base._objs[i] != NULL)
			this->_objs[i] = base._objs[i]->clone();
		else
			this->_objs[i] = NULL;
	}
}

Character &Character::operator=(Character const & base)
{
	if (this != &base)
	{
		this->_name = base.getName();
		for (int i = 0; i < 4; i++)
		{
			if (this->_objs[i] != NULL)
				delete this->_objs[i];
			if (base._objs[i] != NULL)
				this->_objs[i] = base._objs[i]->clone();
			else
				this->_objs[i] = NULL;
		}
	}
	return (*this);
}

std::string const &Character::getName(void)const
{
	return (this->_name);
}

void Character::equip(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0 ; i < 4; i++)
	{
		if (this->_objs[i] == m)
			return;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_objs[i] == NULL)
		{
			this->_objs[i] = m;
			break;
		}
	}
}

void Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_objs[idx] == NULL)
		return;
	this->_objs[idx] = NULL;
}

void Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
		return ;
	if (this->_objs[idx] == NULL)
		return ;
	this->_objs[idx]->use(target);
}

