/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:11:29 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/12 12:36:33 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <iomanip>
#include "contact.class.hpp"

Contact::Contact() : _firstName(""), _lastName(""), _nickName(""), _phoneNumber(""), _darkSecret("")
{
}

Contact::~Contact(void)
{
	return ;
}
void Contact::printResult(int index)
{
	std::string	tmpFn = this->_firstName;
	std::string tmpLn = this->_lastName;
	std::string tmpNm = this->_nickName;

	if (tmpFn.length() > 10)
	{
		tmpFn.resize(9);
		tmpFn += ".";
	}
	if (tmpLn.length() > 10)
	{
		tmpLn.resize(9);
		tmpLn += ".";
	}
	if (tmpNm.length() > 10)
	{
		tmpNm.resize(9);
		tmpNm += ".";
	}
	std::cout << std::setw(10) << index << '|';
	std::cout << std::setw(10) << tmpFn << '|';
	std::cout << std::setw(10) << tmpLn << '|';
	std::cout << std::setw(10) << tmpNm << '|'<<std::endl;
}

void Contact::printDetails(void)
{
	std::cout << "First Name: " << this->_firstName << std::endl;
	std::cout << "Last Name: " << this->_lastName << std::endl;
	std::cout << "Nick Name: " << this->_nickName << std::endl;
	std::cout << "Phone Number: " << this->_phoneNumber << std::endl;
	std::cout << "Dark Secret: " << this->_darkSecret << std::endl;
}

void Contact::fillInfo(std::string fn, std::string ln, std::string nm, std::string pn, std::string ds)
{
	this->_firstName = fn;
	this->_lastName = ln;
	this->_nickName = nm;
	this->_phoneNumber = pn;
	this->_darkSecret = ds;

	return ;
}
