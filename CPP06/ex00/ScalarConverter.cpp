/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/22 10:49:17 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/22 18:11:55 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"


TYPE	parsing(std::string str)
{
	size_t len = str.length();
	bool	got_digit = false;

	if (str == "inf" || str == "+inf" || str == "-inf" || str == "nan" || str == "nanf" ||
		str == "inff" || str == "+inff" ||str == "-inff")
		return (LITERALS);
	if (len == 1 && !isdigit(str[0]) && isprint(str[0]))
		return (CHAR);
	size_t i = 0;
	if (str[i] == '+' || str[i] == '-')
		i++;
	for (; i < len; i++)
	{
		if (!isdigit(str[i]))
			break ;
		got_digit = true;
	}
	if (i == len && got_digit)
		return (INT);
	if (str[i] == '.')
		i++;
	for (; i < len; i++)
	{
		if (!isdigit(str[i]))
			break ;
		got_digit = true;
	}
	if (i == len && got_digit)
		return (DOUBLE);
	if (str[i] == 'f')
		i++;
	if (i == len && got_digit)
		return (FLOAT);
	return (UNKNOWN);
}

void convertChar(std::string str)
{
	char c = str[0];
	std::cout << "char: " << c << std::endl;
	std::cout << "int: "<< static_cast<int>(c) << std::endl;
	std::cout << "float: "<< std::fixed << std::setprecision(1) << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double: "<< std::fixed << std::setprecision(1) << static_cast<double>(c) << std::endl;
}

void convertLiterals(std::string str)
{
	bool isf = false;
	if (str[str.length() - 1] == 'f')
		isf = true;
	std::string withf = str;
	std::string withoutf = str;

	if (isf)
		withoutf.erase(withoutf.length() - 1);
	if (!isf)
		withf += 'f';

	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << withf << std::endl;
	std::cout << "double: " << withoutf << std::endl;
}

void convertNumber(std::string str)
{
	std::stringstream ss(str);
	double nb;
	ss >> nb;
	if (nb > 32 && nb <= 126)
		std::cout << "char: " << static_cast<char>(nb) << std::endl;
	else if ((nb >= 0 && nb < 33) || nb == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;

	if (nb > std::numeric_limits<int>::max() || nb < std::numeric_limits<int>::min())
		std::cout << "int: Overflow" << std::endl;
	else
		std::cout << "int: "<< static_cast<int>(nb) << std::endl;
	if (nb > std::numeric_limits<float>::max() || nb < -std::numeric_limits<float>::max())
		std::cout << "float: Overflow" << std::endl;
	else
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double: "<< std::fixed << std::setprecision(1)  << nb << std::endl;
}

/*void convertFloat(std::string str)
{
	std::stringstream ss(str);

	double nb;
	ss >> f;
	if (f >= 33 && f <= 126)
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	else if ((f >= 0 && f < 33) || f == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: "<< std::fixed << std::setprecision(1)  << f << "f" <<std::endl;
	std::cout << "double: "<< std::fixed << std::setprecision(1)  << static_cast<double>(f) << std::endl;
}

void convertDouble(std::string str)
{
	std::stringstream ss(str);

	double d;

	ss >> d;
	if (d >= 33 && d <= 126)
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	else if ((d >= 0 && d < 33) || d == 127)
		std::cout << "char: Non displayable" << std::endl;
	else
		std::cout << "char: Impossible" << std::endl;
	std::cout << "int: " << static_cast<int>(d) << std::endl;
	std::cout << "float: "<< std::fixed << std::setprecision(1) << static_cast<float>(d)<< "f" << std::endl;
	std::cout << "double: "<< std::fixed << std::setprecision(1)  << d << std::endl;
}*/

void ScalarConverter::convert(std::string str)
{
	switch (parsing(str))
	{
		case LITERALS:
			convertLiterals(str);
			break ;
		case CHAR:
			convertChar(str);
			break;
		case INT:
			convertNumber(str);
			break;
		case DOUBLE:
			convertNumber(str);
			break;
		case FLOAT:
			convertNumber(str);
			break;
		default:
			std::cout << "This type of conversion is impossible" << std::endl;
			break;
	}
}
