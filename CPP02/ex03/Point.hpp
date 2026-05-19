/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 16:55:23 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/23 18:21:11 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point
{
	public:
		Point(void);
		~Point(void);
		Point(const float x, const float y);
		Point(const Point &base);
		Point &operator=(const Point &base);

		const Fixed &getX(void) const;
		const Fixed &getY(void) const;

	private:
		const Fixed _x;
		const Fixed _y;

};

bool bsp(Point const a, Point const b, Point const c, Point const point);


#endif
