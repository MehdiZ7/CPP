/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 17:03:11 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/21 13:24:00 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "[ DEBUG ]" << std::endl;
	std::cout << "This is a DEBUG message" << std::endl<<std::endl;
}

void	Harl::info(void)
{
	std::cout << "[ INFO ]" << std::endl;
	std::cout << "This is an INFO message" << std::endl<<std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[ WARNING ]" << std::endl;
	std::cout << "This is a WARNING message" << std::endl<<std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ ERROR ]"<< std::endl;
	std::cout << "This is an ERROR message" << std::endl<<std::endl;
}

void	Harl::complain( std::string level )
{
	int	i = 0;
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	while (i < 4)
	{
		if (levels[i] == level)
			break ;
		i++;
	}
	switch(i)
	{
		case 0:
			this->debug();
		case 1:
			this->info();
		case 2:
			this->warning();
		case 3:
			this->error();
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]"<<std::endl<<std::endl;
	}

}

