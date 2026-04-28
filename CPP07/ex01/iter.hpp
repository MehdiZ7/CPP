/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 17:59:35 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/28 13:46:25 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>

template<typename T>
void iter(T *tab, const size_t size, void (*action)(T &))
{
	for (size_t i = 0; i < size; i++)
	{
		action(tab[i]);
	}
}

template<typename T>
void iter(const T *tab, const size_t size, void (*action)(const T &))
{
	for (size_t i = 0 ; i < size ; i++)
	{
		action(tab[i]);
	}
}

template<typename T>
void print(const T & str)
{
	std::cout << str << std::endl;
}

