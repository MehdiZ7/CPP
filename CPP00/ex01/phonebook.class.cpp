/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:08:59 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/18 12:28:02 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.class.hpp"
#include <iostream>

Phonebook::Phonebook()
{}

Phonebook::~Phonebook()
{
	return;
}

void	Phonebook::addContact(void)
{
	std::string	fN;
	std::string	lN;
	std::string	nN;
	std::string pN;
	std::string dS;

	fN = getInput("First Name: ");
	lN = getInput("Last Name: ");
	nN = getInput("Nick Name: ");
	pN = getInput("Phone Number: ");
	dS = getInput("Dark Secret: ");

	this->_contact[_index].fillInfo(fN, lN, nN, pN, dS);
	_index++;
	if (_index > 7)
		_index = 0;
	if (_count < 8)
		_count++;
	return ;
}

std::string	Phonebook::getInput(std::string prompt)
{
	std::string	input;

	while (1)
	{
		std::cout << prompt;
		std::getline(std::cin, input);
		if (input.empty() || input.find_first_not_of(" \t") == std::string::npos)
			continue;
		break ;
	}
	return (input);
}

void	Phonebook::searchContact(void)
{
	int	index;

	for (int i = 0; i < _count; i++)
		this->_contact[i].printResult(i);
	while (1)
	{
		std::cout << "SELECT CONTACT INDEX: ";
		std::cin >> index;
		if (std::cin.fail())
		{
			std::cout << "NOT A NUMBER" << std::endl;
			std::cin.clear();
			std::cin.ignore(10000, '\n');
			continue ;
		}
		else if (index < 0 || index > _count)
		{
			std::cout << "Unknown contact, please try again!"<<std::endl ;
			std::cin.ignore(10000, '\n');
			continue ;
		}
		else
		{
			std::cin.ignore(10000, '\n');
			break ;
		}
	}
	this->_contact[index].printDetails();
	return ;
}

int	Phonebook::_index = 0;
int	Phonebook::_count = 0;
