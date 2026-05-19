/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 14:35:14 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 15:47:29 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int	main(int ac, char **av)
{
	if (ac != 4)
	{
		std::cout << "Wrong number of argument" << std::endl;
		return (1);
	}
	if ((std::string)av[2] == "")
	{
		std::cout << "Nothing to look for" << std::endl;
		return (1);
	}

	std::ifstream infile(av[1]);
	std::string	  outname = (std::string)av[1] + ".replace";
	std::ofstream outfile(outname.c_str());
	std::string		line;
	std::string		s1 = av[2];
	std::string		s2 = av[3];
	size_t	i = 0;

	if (!infile.is_open())
	{
		std::cout << "Error while opening the file "<< av[1] << std::endl;
		return (1);
	}
	if (!outfile.is_open())
	{
		std::cout << "Error while creating the outfile "<< av[1] << std::endl;
		infile.close();
		return (1);
	}
	while(std::getline(infile, line))
	{
		i = 0;
		i = line.find(s1);
		while (i != std::string::npos)
		{
			line.erase(i, s1.length());
			line.insert(i, s2);

			i += s2.length();
			i = line.find(s1, i);
		}
		outfile << line;
		if (!infile.eof())
			outfile <<  "\n";
	}
	outfile.close();
	infile.close();
	return (0);
}
