/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:47:50 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/23 14:25:22 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(void)
{
	std::cout << "Default constructor called" << std::endl;
	this->_nb = 0;
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void)const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_nb);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "setRawBits member function called" << std::endl;
	this->_nb = raw;
}

Fixed::Fixed(const Fixed &base)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = base;
}

Fixed &Fixed::operator=(const Fixed &base)
{
	std::cout << "Copy assignment operator called" << std::endl;
	if (this != &base)
		this->_nb = base.getRawBits();
	return (*this);
}
