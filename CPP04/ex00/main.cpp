/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:29:17 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 14:41:21 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete i;
	delete j;

	std::cout << "-------- TEST WITH WRONG CAT AND WRONG ANIMAL ----------" << std::endl;

	const WrongAnimal* meta1 = new WrongAnimal();
	const WrongAnimal* i2 = new WrongCat();

	std::cout << i2->getType() << " " << std::endl;

	i2->makeSound();

	meta1->makeSound();

	delete meta1;
	delete i2;
	return 0;
}
