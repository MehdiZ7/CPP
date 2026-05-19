/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:08:27 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/12 15:33:04 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include <iostream>

int	main(void)
{
	std::string	input;
	Phonebook	Phone;

	while(1)
	{
		std::cout << "---ACTIONS---"<< std::endl;
		std::cout << "ADD" << std::endl;
		std::cout << "SEARCH" <<std::endl;
		std::cout << "EXIT" << std::endl;
		std::cout<< "Enter action: ";

		std::getline(std::cin, input);
		if (input == "ADD")
			Phone.addContact();
		if (input == "SEARCH")
			Phone.searchContact();
		if (input == "EXIT")
			break ;
	}
}
