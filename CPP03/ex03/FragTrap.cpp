/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:28:40 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/24 15:46:43 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "An unknown FragTrap as been created" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->_name << " has been destroyed !" << std::endl;
}

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	this->_hitPoint = 100;
	this->_energyPoint = 100;
	this->_attackDamage = 30;
	std::cout << "A FragTrap named " << this->getName() << " has been created." << std::endl;
}

FragTrap::FragTrap(FragTrap const & base) : ClapTrap(base)
{
	std::cout << "A copy of FragTrap named " << this->getName() << " has been created." << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const & base)
{
	if (this != &base)
	{
		ClapTrap::operator=(base);
		std::cout << "A FragTrap has been replaced by " << base.getName() << std::endl;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(void)
{
	std::cout<< "Hi Guys, i'm FragTrap "<< this->_name << "! Wanna HIGH FIVE ?" << std::endl;
}

void	FragTrap::attack(const std::string& Name)
{
	if (this->getHealth() == 0)
	{
		std::cout << "Impossible to attack! " << this->getName() << " FragTrap is dead !" << std::endl;
		return ;
	}

	if (this->getEnergy() == 0)
	{
		std::cout << "Not enough energy to attack " << Name << std::endl;
		return ;
	}

	std::cout << "FragTrap " << this->getName() << " attacks " << Name << " causing "
	<< this->getAttack() << " points of damage !"<< std::endl;
	this->_energyPoint--;
}
