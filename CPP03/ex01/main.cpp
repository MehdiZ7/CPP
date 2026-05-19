/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 11:17:48 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/31 11:50:06 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(void)
{
	std::cout << "\n\n=== [ CONSTRUCTION AND CANONIQUE FORM TEST ] ===" << std::endl;
	ScavTrap s1("Pierre"), s2("Paul"), s3("Jacques"), s4, s5(s2);

	s4 = s1;

	std::cout << "\n\n=== [ ATTACK TEST ] ===" << std::endl;
	s4.attack(s1.getName());
	s1.takeDamage(s4.getAttack());

	std::cout << "\n\n=== [ SPECIAL CAPACITY TEST ] ===" << std::endl;
	s3.guardGate();

	std::cout << "\n\n=== [ INHERANCE NEW STAT TEST ] ===" << std::endl;
	ClapTrap c1("weak");

	s4.attack(c1.getName());
	c1.takeDamage(s4.getAttack());

	std::cout << "\n\n=== [ DESTRUCTION TEST ] ===" << std::endl;
	return (0);
}
