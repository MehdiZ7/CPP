/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 12:11:40 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 12:34:33 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int	main(void)
{
	std::string s = "HI THIS IS BRAIN";

	std::string* stringPTR = &s;
	std::string& stringREF = s;

	std::cout << "Memory add of the variable: " << &s << std::endl;
	std::cout << "Memory add of the pointer : " << stringPTR << std::endl;
	std::cout << "Memory add of the reference : " << &stringREF << std::endl << std::endl;

	std::cout << "Value of the variable: " << s << std::endl;
	std::cout << "Value pointed by the pointer: " << *stringPTR << std::endl;
	std::cout << "Value pointed by the reference: " << stringREF << std::endl;

	return (0);
}
