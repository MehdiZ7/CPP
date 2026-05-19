/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 16:55:25 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/23 17:50:11 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{}

Point::~Point(void)
{}

Point::Point(const float x, const float y) : _x(x), _y(y)
{}

Point::Point(const Point &base) : _x(base._x), _y(base._y)
{}

Point &Point::operator=(const Point &base)
{
	if (this != &base)
	{
		//As x and y are const value, they cant be modifie.
		//so this function is impossible to implemente
	}
	return (*this);
}

const Fixed &Point::getX(void) const
{
	return (this->_x);
}

const Fixed &Point::getY(void)const
{
	return (this->_y);
}
