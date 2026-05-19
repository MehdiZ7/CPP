/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:29:26 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 17:03:47 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog(void);
		~Dog(void);
		Dog(const Dog & base);
		Dog &operator=(const Dog &base);

		void makeSound(void)const;
		void setMind(int index, std::string thought);
		std::string getMind(int index)const;

	private:
		Brain* mind;
};

#endif
