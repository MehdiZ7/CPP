/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:05:26 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/28 15:36:46 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <exception>

template <typename T>
class Array
{
	private:
		T*				_array;
		unsigned int	_size;

	public:
		Array(void);
		Array(unsigned int nb);
		Array(const Array & base);
		Array &operator=(const Array & base);
		~Array(void);

		T &operator[](int index);
		const T &operator[](int index)const;

		unsigned int size(void)const;

	class OutOfBoundsException : public std::exception
	{
		public:
			virtual const char* what() const throw();
	};
};

#include "Array.tpp"
