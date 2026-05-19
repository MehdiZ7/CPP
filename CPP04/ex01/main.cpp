/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 11:29:17 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 17:30:14 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal* test1 = new Dog();
	std::cout << std::endl;
	const Animal* test2 = new Cat();
	std::cout<<std::endl;
	delete test1;
	std::cout<<std::endl;
	delete test2;
	std::cout<<std::endl;



	Animal*	street[10];

	std::cout << std::endl;
	for (int i = 0; i < 5; i++)
		street[i] = new Cat();

	std::cout << std::endl;
	for (int i = 5; i < 10; i++)
		street[i] = new Dog();

	std::cout<<std::endl;
	for (int i = 0; i < 10; i++)
		delete street[i];

	std::cout<<std::endl;
	std::cout<<std::endl;
	std::cout << "------ DEEP COPY TEST --------" << std::endl;
	std::cout<<std::endl;
	Dog origin;
	std::cout<<std::endl;
	origin.setMind(50, "Let's go for a walk !");
	std::cout << "Origin dog think " << origin.getMind(50) << std::endl;
	Dog copy(origin);
	std::cout << "Copy dog think " <<  copy.getMind(50) << std::endl;
	std::cout<<std::endl;
	origin.setMind(50, "Oh is that a cat ?!");
	std::cout << "origin dog think " << origin.getMind(50) << std::endl;
	std::cout << "Copy dog think " <<  copy.getMind(50) << std::endl;
	copy = origin;
	std::cout << "origin dog think " << origin.getMind(50) << std::endl;
	std::cout << "Copy dog think " <<  copy.getMind(50) << std::endl;

	return 0;
}
