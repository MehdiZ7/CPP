/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:17:44 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/24 13:14:33 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name("John_Doe"), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "An unknow ClapTrap as been created." << std::endl;
}

ClapTrap::ClapTrap(std::string Name) : _name(Name), _hitPoint(10), _energyPoint(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << this->getName() << " has been created."  << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap " << this->getName() << " has been destroyed." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &base) : _name(base.getName()), _hitPoint(base.getHealth()), _energyPoint(base.getEnergy()), _attackDamage(base.getAttack())
{
	std::cout<< "A copy of " << this->getName() << " has been created."<< std::endl;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &base)
{
	if (this != &base)
	{
		_name = base.getName();
		_hitPoint = base.getHealth();
		_energyPoint = base.getEnergy();
		_attackDamage = base.getAttack();
		std::cout << "ClapTrap " << this->getName() << " has been copied."<< std::endl;
	}
	return (*this);
}

std::string ClapTrap::getName(void)const
{
	return (this->_name);
}

unsigned int ClapTrap::getHealth(void)const
{
	return (this->_hitPoint);
}

unsigned int ClapTrap::getEnergy(void)const
{
	return (this->_energyPoint);
}

unsigned int ClapTrap::getAttack(void)const
{
	return (this->_attackDamage);
}

void ClapTrap::setAttack(unsigned int amount)
{
	this->_attackDamage = amount;
	std::cout << "ClapTrap " << this->getName() << " attack set to " << amount << std::endl;
}

void	ClapTrap::attack(const std::string& Name)
{
	if (this->getHealth() == 0)
	{
		std::cout << "Impossible to attack! " << this->getName() << " is dead !" << std::endl;
		return ;
	}

	if (this->getEnergy() == 0)
	{
		std::cout << "Not enough energy to attack " << Name << std::endl;
		return ;
	}

	std::cout << "ClapTrap " << this->getName() << " attacks " << Name << " causing "
	<< this->getAttack() << " points of damage !"<< std::endl;
	this->_energyPoint--;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if ((int)this->_hitPoint - (int)amount <= 0)
	{
		this->_hitPoint = 0;
		std::cout << "ClapTrap " << this->_name << " has died after taken " << amount << " damage." << std::endl;
		return ;
	}
	this->_hitPoint -= amount;
	std::cout << "ClapTrap " << this->_name << " has taken " << amount << " damage. "
	<< this->getHealth() << " HP remaining!" <<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->getHealth() == 0)
	{
		std::cout << "Impossible to repaire! " << this->getName() << " is dead !" << std::endl;
		return ;
	}

	if (this->getEnergy() == 0)
	{
		std::cout << "Not enough energy to repaire " << this->getName() << std::endl;
		return ;
	}

	this->_hitPoint += amount;
	this->_energyPoint--;
	std::cout << "ClapTrap "<< this->getName() << " has regain " << amount << " HP. "<<
	this->getHealth() << " HP remaining." << std::endl;
}



