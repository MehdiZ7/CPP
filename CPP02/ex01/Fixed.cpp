/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:47:50 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/23 15:08:57 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

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

Fixed::Fixed(int const number)
{
	std::cout << "Int constructor called" << std::endl;
	this->_nb = (number << Fixed::bits);
}

Fixed::Fixed(float const fl)
{
	std::cout << "Float constructor called" << std::endl;
	this->_nb = roundf(fl * powf(2, Fixed::bits));
}

float	Fixed::toFloat(void) const
{
	float res;

	res = (float)this->_nb / powf(2, Fixed::bits);
	return (res);
}

int	Fixed::toInt(void) const
{
	return (this->_nb >> Fixed::bits);
}

std::ostream &operator<<(std::ostream &out, Fixed const & rhs)
{
	out << rhs.toFloat();
	return (out);
}
