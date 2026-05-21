/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:07:08 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/20 18:13:16 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <fstream>
#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <cstdlib>
#include <cctype>

class Bitcoin
{
	private:
		std::map<std::string, float>	_data;

	public:
		Bitcoin(void);
		~Bitcoin(void);
		Bitcoin(const Bitcoin & base);
		Bitcoin &operator=(const Bitcoin & base);
		void parseInput(const std::string & filename);
		bool parseValue(const std::string & value);
		bool parseDate(const std::string & date);

	class OpenDataException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Error: Impossible to read data base.");
			}
	};

	class OpenFileException : public std::exception
	{
		public:
			virtual const char * what() const throw()
			{
				return ("Error: could not open file.");
			}
	};

};
