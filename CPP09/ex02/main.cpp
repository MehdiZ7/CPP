/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:08:09 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/22 16:08:51 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
	PmergeMe ford;

	for (int i = 1; i < ac; ++i)
	{
		if (!ford.verifiyDigit(av[i]))
		{
			std::cerr << "Error" << std::endl;
			return (1);
		}
	}
}
