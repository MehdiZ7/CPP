/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 14:07:03 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/20 18:20:59 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

Bitcoin::~Bitcoin(void)
{}

Bitcoin::Bitcoin(const Bitcoin & base)
{
	this->_data = base._data;
}

Bitcoin &Bitcoin::operator=(const Bitcoin & base)
{
	if (this != &base)
	{
		this->_data = base._data;
	}
	return (*this);
}

Bitcoin::Bitcoin(void)
{
	std::ifstream file("data.csv");

	if (!file.is_open())
		throw OpenDataException();
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		size_t pos = line.find(",");
		std::string date = line.substr(0,pos);
		std::string value = line.substr(pos + 1);
		this->_data[date] = std::atof(value.c_str());
	}
}

bool Bitcoin::parseValue(const std::string & value)
{
	if (value.empty())
	{
		std::cout << "Error: not a valid number." << std::endl;
		return (false);
	}
	bool hasDot = false;
	int i = 0;
	if (value[i] == '-')
	{
		std::cout << "Error: not a positive number." << std::endl;
		return (false);
	}
	if (value[i] == '+')
		i++;
	for (; i < static_cast<int>(value.size()); ++i)
	{
		if ((!isdigit(value[i]) && value[i] != '.') || (value[i] == '.' && hasDot))
		{
			std::cout << "Error: not a valid number." << std::endl;
			return (false);
		}
		if (value[i] == '.')
			hasDot = true;
	}

	return (true);
}

bool Bitcoin::parseDate(const std::string & date)
{
	if (date.size() != 10 || date[4] != '-' || date[7] != '-')
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	std::string year = date.substr(0, 4);
	std::string month = date.substr(5, 7);
	std::string day = date.substr(8);

	int y = std::atoi(year.c_str());
	int m = std::atoi(month.c_str());
	int d = std::atoi(day.c_str());

	if (m < 1 || m > 12 || d < 1 || d > 31)
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}

	int daysTotal[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
	bool isLeap = ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0));
	if (m == 2 && isLeap)
		daysTotal[2] = 29;
	if (d > daysTotal[m])
	{
		std::cout << "Error: bad input => " << date << std::endl;
		return (false);
	}
	return (true);
}

void Bitcoin::parseInput(const std::string & filename)
{
	std::ifstream file(filename.c_str());
	if (!file.is_open())
		throw OpenFileException();
	std::string line;
	std::getline(file, line);
	while (std::getline(file, line))
	{
		size_t pos = line.find(" | ");
		if (pos == std::string::npos)
		{
			std::cout << "Error: bad input => " << line << std::endl;
			continue ;
		}
		std::string date = line.substr(0, pos);
		std::string value = line.substr(pos + 3);
		if (!this->parseDate(date))
			continue;
		if (!this->parseValue(value))
			continue;
		double val = atof(value.c_str());
		if (val > 1000)
		{
			std::cout << "Error: too large a number."<< std::endl;
			continue;
		}
		std::map<std::string, float>::iterator it = this->_data.lower_bound(date);
		if (it == this->_data.end() || it->first != date)
		{
			if (it == this->_data.begin())
			{
				std::cout << "Error: bad input => "<< date << std::endl;
				continue ;
			}
			--it;
		}
		std::cout << date << " => " << val << " = " << val * it->second << std::endl;
	}

}
