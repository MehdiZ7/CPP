/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:45:30 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/27 17:52:58 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template <typename T>
void	swap(T & x, T & y)
{
	T tmp = x;

	x = y;
	y = tmp;
}

template <typename T>
const T & min(T const & x, T const & y)
{
	return (x < y ? x : y);
}

template <typename T>
const T & max(T const & x, T const & y)
{
	return (x > y ? x : y);
}
