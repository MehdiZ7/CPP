/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 13:59:39 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 14:49:14 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
	public:

		WrongAnimal(void);
		virtual ~WrongAnimal(void);
		WrongAnimal(std::string type);
		WrongAnimal(const WrongAnimal & base);
		WrongAnimal &operator=(const WrongAnimal & base);

		std::string getType(void)const;
		void makeSound(void)const;

	protected:
		std::string type;
};

#endif
