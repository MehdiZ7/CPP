/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:59:24 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/28 13:53:33 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void increment(int & nb)
{
	nb++;
}

void concatenate(std::string & str)
{
	str += " Hello";
}

int main(void)
{
	int tab[4] = {0, 1, 2 ,3};
	std::string array[4] = {"You,", "Me,", "Them, ", "Everybody," };

	std::cout << "------ Print before Modification -----------" << std::endl;
	iter(tab, 4, print<int>);
	iter(array, 4, print<std::string>);

	iter(tab, 4, increment);
	iter(array, 4, concatenate);
	std::cout << "------ Print after Modification -----------" << std::endl;
	iter(tab, 4, print<int>);
	iter(array, 4, print<std::string>);
	return (0);
}
