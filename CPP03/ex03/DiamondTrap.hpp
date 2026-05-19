/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:54:08 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/31 11:39:53 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap :public FragTrap, public ScavTrap
{
	public:
		DiamondTrap(void);
		~DiamondTrap(void);
		DiamondTrap(std::string name);
		DiamondTrap(DiamondTrap const & base);
		DiamondTrap &operator=(DiamondTrap const & base);
		void attack(const std::string& target);
		void whoAmI(void);


	private:
		std::string _name;

};

#endif
