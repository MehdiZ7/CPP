/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:48:56 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/22 14:52:05 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cctype>
#include <limits>
#include <cstdlib>
#include <sstream>
#include <iomanip>

enum TYPE
{
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	LITERALS,
	UNKNOWN
};

class ScalarConverter
{
	private:
		ScalarConverter(void);
		~ScalarConverter(void);
		ScalarConverter(std::string info);
		ScalarConverter(const ScalarConverter & base);
		ScalarConverter &operator=(const ScalarConverter & base);

	public:
		static void convert(std::string str);
};
