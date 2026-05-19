/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:21:18 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/26 16:18:25 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource(void)
{
	for (int i = 0; i < 4 ; i++)
		this->_list[i] = NULL;
}

MateriaSource::~MateriaSource(void)
{
	for (int i = 0; i < 4; i++)
		if (this->_list[i] != NULL)
			delete this->_list[i];
}

MateriaSource::MateriaSource(const MateriaSource & base)
{
	for (int i = 0; i < 4; i++)
	{
		if (base._list[i] != NULL)
			this->_list[i] = base._list[i]->clone();
		else
			this->_list[i] = NULL;
	}
}
MateriaSource &MateriaSource::operator=(const MateriaSource & base)
{
	if (this != &base)
	{
		for (int i = 0; i < 4; i++)
		{
			if (this->_list[i] != NULL)
				delete this->_list[i];
			if (base._list[i] != NULL)
				this->_list[i] = base._list[i]->clone();
			else
				this->_list[i] = NULL;
		}
	}
	return (*this);
}

void MateriaSource::learnMateria(AMateria* m)
{
	if (!m)
		return ;
	for (int i = 0; i < 4; i++)
	{
		if (this->_list[i] == m)
			return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (this->_list[i] == NULL)
		{
			this->_list[i] = m;
			return ;
		}
	}
	delete m;
}

AMateria *MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (this->_list[i]!= NULL && this->_list[i]->getType() == type)
			return (this->_list[i]->clone());
	}
	return (NULL);
}
