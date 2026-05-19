/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:51:24 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 16:55:49 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void	Harl::debug(void)
{
	std::cout << "This is a DEBUG message" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "This is an INFO message" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "This is a WARNING message" << std::endl;
}

void	Harl::error(void)
{
	std::cout << "This is an ERROR message" << std::endl;
}

void	Harl::complain( std::string level)
{
	std::string	levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	void (Harl::*functions[4])(void) = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return ;
		}
	}
}
