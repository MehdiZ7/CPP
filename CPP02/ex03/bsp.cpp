/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 16:54:54 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/23 18:10:41 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed crossProduct(Point const a, Point const b, Point const point)
{
	Fixed res;

	res = (point.getX() - a.getX()) * (b.getY() - a.getY()) - (point.getY() - a.getY()) * (b.getX() - a.getX());
	return (res);
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{
	Fixed res1, res2, res3, res4(0);

	res1 = crossProduct(a, b, point);
	res2 = crossProduct(b, c, point);
	res3 = crossProduct(c, a, point);

	if (res1 > res4 && res2 > res4 && res3 > res4)
		return (true);
	else if (res1< res4 && res2 < res4 && res3 < res4)
		return (true);
	return (false);
}
