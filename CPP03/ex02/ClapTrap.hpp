/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:17:50 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/24 15:03:47 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_H
#define CLAPTRAP_H

#include <iostream>

class ClapTrap
{
	public:
		ClapTrap(void);
		ClapTrap(std::string Name);
		~ClapTrap(void);
		ClapTrap(const ClapTrap &base);
		ClapTrap &operator=(const ClapTrap &base);
		
		void attack(const std::string& target);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);

		std::string getName(void)const;
		unsigned int getHealth(void)const;
		unsigned int getEnergy(void)const;
		unsigned int getAttack(void)const;

		void setAttack(unsigned int amount);
		void setHealth(unsigned int amount);
		void setName(std::string Name);
		void setEnergy(unsigned int amount);

	protected:
		std::string		_name;
		unsigned int	_hitPoint;
		unsigned int	_energyPoint;
		unsigned int	_attackDamage;
};

#endif
