/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 12:57:01 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/11 16:34:00 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(int ac, char **av)
{
	std::string s;

	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	for (int i = 1; i < ac; i++)
	{
		s += av[i];
		if ( i != ac - 1)
			s += " ";
	}
	for (size_t i = 0; i < s.length(); i++)
		s.at(i) = toupper(s.at(i));
	std::cout << s << std::endl;
	return (0);
}
