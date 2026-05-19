/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:29:20 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 17:37:51 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
	public:

		Animal(void);
		virtual ~Animal(void);
		Animal(std::string type);
		Animal(const Animal & base);
		Animal &operator=(const Animal & base);

		std::string getType(void)const;
		virtual void makeSound(void)const = 0;

	protected:
		std::string type;
};

#endif
