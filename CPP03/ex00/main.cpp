/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:17:48 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/31 11:48:04 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(void)
{
	std::cout << "\n\n=== [ CONSTRUCTION TESTS ] ===" << std::endl;
	ClapTrap nb1("michel"), nb2("aziz");

	std::cout << "\n\n=== [ FIGHT AND HEALING TESTS ] ===" << std::endl;
	nb1.attack(nb2.getName());
	nb2.takeDamage(0);
	nb2.setAttack(5);
	nb2.attack(nb1.getName());
	nb1.takeDamage(5);
	nb1.beRepaired(2);
	nb2.setAttack(9);
	nb2.attack(nb1.getName());
	nb1.takeDamage(9);
	nb1.beRepaired(10);
	nb1.attack(nb2.getName());

	std::cout << "\n\n=== [ CANONIC FORM TEST ] ===" << std::endl;
	ClapTrap nb3(nb2);
	nb3 = nb1;

	std::cout << "\n\n=== [ CANT ATTACK TEST ] ===" << std::endl;
	for (int i = 0; i < 12; i++)
		nb2.beRepaired(2);

	std::cout << "\n\n=== [ DESTRUCTION TEST ] ===" << std::endl;
	return (0);
}
