/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 12:05:40 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/27 14:49:48 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data 		test;
	uintptr_t 	ret;
	Data*		final;

	test.checker = "This is a test";
	std::cout << "Original adress of the Data struct: " << &test << std::endl;

	ret = Serializer::serialize(&test);
	std::cout << "uintptr value after serializing the Data Struct: " << ret << std::endl;
	final = Serializer::deserialize(ret);
	std::cout << "Adress of the Data struct after deserializing: " << final << std::endl;
	std::cout << "What's inside: " << final->checker << std::endl;
	return (0);
}
