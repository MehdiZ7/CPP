/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 14:16:42 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/24 15:20:25 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "An unknown ScavTrap as been created." << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap " << this->getName() << " has been destroyed !"<< std::endl;
}

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 50;
	this->_attackDamage = 20;
	std::cout << "A ScavTrap named " << this->getName() << " has been created." << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & base) : ClapTrap(base)
{
	std::cout << "A copy of ScavTrap named " << this->getName() << " has been created." << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const & base)
{
	if (this != &base)
	{
		ClapTrap::operator=(base);
		std::cout << "A ScavTrap has been replaced by " << base.getName() << std::endl;
	}
		return (*this);
}

void ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->getName() << " is now in Gate Mode Keeper" << std::endl;
}

void	ScavTrap::attack(const std::string& Name)
{
	if (this->getHealth() == 0)
	{
		std::cout << "Impossible to attack! " << this->getName() << " ScavTrap is dead !" << std::endl;
		return ;
	}

	if (this->getEnergy() == 0)
	{
		std::cout << "Not enough energy to attack " << Name << std::endl;
		return ;
	}

	std::cout << "ScavTrap " << this->getName() << " attacks " << Name << " causing "
	<< this->getAttack() << " points of damage !"<< std::endl;
	this->_energyPoint--;
}
