/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:48:26 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/08 11:02:17 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Character.hpp"
#include "Ice.hpp"
#include "Cure.hpp"

int main(void)
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);


	std::cout << "------ MY OWN TESTS --------" << std::endl;

	Character* kratos = new Character("kratos");
	tmp = src->createMateria("cure");
	kratos->equip(tmp);
	tmp = src->createMateria("ice");
	kratos->equip(tmp);
	ICharacter* link = new Character(*kratos);
	tmp = src->createMateria("cure");
	kratos->equip(tmp);
	kratos->use(2, *link);
	//link must not attack cause he have no item on slot 2
	link->use(2, *kratos);
	// filling the 4th slot (index 3)
	tmp = src->createMateria("cure");
	kratos->equip(tmp);
	AMateria* to_unequip = tmp;

	// testing full inventory
	tmp = src->createMateria("ice");
	kratos->equip(tmp);
	//deleting the object because inventory is full
	delete tmp;

	// testing unequip
	kratos->unequip(3);
	delete to_unequip; 

	delete bob;
	delete me;
	delete kratos;
	delete link;
	delete src;
	return 0;
}
