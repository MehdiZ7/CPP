/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:17:48 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/31 11:52:09 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int	main(void)
{
	std::cout << "\n\n=== [ CONSTRUCTION AND CANONIC FORM TEST ] ===" << std::endl;
	DiamondTrap Miskine;
	std::cout<<std::endl;
	DiamondTrap Jean("Valjean");
	std::cout<<std::endl;
	DiamondTrap n1("pil");
	std::cout<<std::endl;
	DiamondTrap n2(n1);
	std::cout<<std::endl;
	Miskine = n1;

	std::cout << "\n\n=== [ ATTACK TEST. MUST USE SCAVTRAP ] ===" << std::endl;
	n1.attack("Valjean");
	n2.takeDamage(30);
	n2.beRepaired(25);

	std::cout << "\n\n=== [ INHERANCE TEST ] ===" << std::endl;
	n2.guardGate();
	Jean.highFivesGuys();

	std::cout << "\n\n=== [ WHO I AM TEST ] ===" << std::endl;
	Jean.whoAmI();

	std::cout << "\n\n=== [ DESTRUCTOR TEST ] ===" << std::endl;
	return (0);
}
