/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:30:38 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 11:17:21 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie* michel;

	michel = newZombie("Michel");
	michel->announce();
	randomChump("Marcel");
	delete michel;
	return (0);
}
