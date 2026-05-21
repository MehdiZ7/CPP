/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:07:11 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/20 17:58:21 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
	{
		std::cerr << "Error: could not open file" << std::endl;
		return (1);
	}

	try
	{
		Bitcoin	btc;
		btc.parseInput(av[1]);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
}
