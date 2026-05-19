/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 12:41:17 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 14:27:14 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name) : _name(name)
{
	_weapon = NULL;
}

HumanB::~HumanB(void)
{

}

void HumanB::setWeapon(Weapon& war)
{
	this->_weapon = &war;
}

void HumanB::attack(void)const
{
	if (!this->_weapon)
	{
		std::cout << _name << " attack with his bare hands" << std::endl;
		return ;
	}
	std::string type = this->_weapon->getType();
	std::cout << _name << " attacks with their " << type << std::endl;
}
