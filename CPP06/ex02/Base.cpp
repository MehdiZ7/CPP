/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 15:07:44 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/27 15:56:40 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base(void)
{}

Base *generate(void)
{
	int	random = std::rand();
	if (random % 3 == 0)
		return (new A());
	else if (random % 3 == 1)
		return (new B());
	else if (random % 3 == 2)
		return (new C());
	else
		return (NULL);
}

void	identify(Base *p)
{
	if (dynamic_cast<A*>(p) != NULL)
	{
		std::cout << "This pointer belong to the A class" << std::endl;
		return ;
	}
	else if (dynamic_cast<B*>(p) != NULL)
	{
		std::cout << "This pointer belong to the B class" << std::endl;
		return ;
	}
	else if (dynamic_cast<C*>(p) != NULL)
	{
		std::cout << "This pointer belong to the C class" << std::endl;
		return ;
	}
}

void identify(Base &p)
{
	try
	{
		dynamic_cast<A&>(p);
		std::cout << "This reference belong to the A class" << std::endl;
	}
	catch (std::exception &e)
	{}

	try
	{
		dynamic_cast<B&>(p);
		std::cout << "This reference belong to the B class" << std::endl;
	}
	catch (std::exception &e)
	{}

	try
	{
		dynamic_cast<C&>(p);
		std::cout << "This reference belong to the C class" << std::endl;
	}
	catch(std::exception &e)
	{}
}
