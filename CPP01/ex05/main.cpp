/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 15:51:29 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 17:00:03 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(void)
{
	Harl	guy;

	guy.complain("test");
	guy.complain("DEBUG");
	guy.complain("");
	guy.complain("INFO");
	guy.complain("WARNING");
	guy.complain("ERROR");
	return (0);
}
