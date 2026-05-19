/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:54:06 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/24 18:20:56 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("John_Doe_clap_name") ,FragTrap(), ScavTrap(), _name("John_Doe")
{
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "An unknown DiamonTrap has been created." << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "The DiamondTrap " << this->_name << " has been destroyed."<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"),
FragTrap(name), ScavTrap(name), _name(name)
{
	this->_hitPoint = FragTrap::_hitPoint;
	this->_energyPoint = ScavTrap::_energyPoint;
	this->_attackDamage = FragTrap::_attackDamage;
	std::cout << "The DiamondTrap " << this->_name << " has been created."<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap const & base) : ClapTrap(base), FragTrap(base),ScavTrap(base) , _name(base._name)
{
	std::cout << "A copy of DiamondTrap named " << this->getName() << " has been created." << std::endl;
}

DiamondTrap &DiamondTrap::operator=(DiamondTrap const & base)
{
	if (this != &base)
	{
		ClapTrap::operator=(base);
		this->_name = base._name;
		std::cout << "A DiamondTrap has been replaced by " << base._name << std::endl;
	}
	return (*this);
}

void DiamondTrap::whoAmI(void)
{
	std::cout << "The DiamondTrap name is " << this->_name << std::endl;
	std::cout << "The ClapTrap name is " << ClapTrap::_name << std::endl;
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

