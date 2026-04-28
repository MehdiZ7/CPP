/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 14:05:24 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/28 15:50:09 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	_array = NULL;
	_size = 0;
}

template <typename T>
Array<T>::Array(unsigned int nb)
{
	_array = new T[nb]();
	_size = nb;
}

template <typename T>
Array<T>::Array(const Array & base)
{
	_array = new T[base._size];
	_size = base._size;
	for (unsigned int i = 0; i < _size; i++)
	{
		_array[i] = base._array[i];
	}
}

template <typename T>
Array<T> &Array<T>::operator=(const Array & base)
{
	if (this != &base)
	{
		delete[] this->_array;
		this->_array = new T[base._size];
		this->_size = base._size;
		for (unsigned int i = 0; i < this->_size; i++)
		{
			this->_array[i] = base._array[i];
		}
	}
	return (*this);
}

template <typename T>
Array<T>::~Array(void)
{
	delete[] _array;
}

template <typename T>
const char* Array<T>::OutOfBoundsException::what() const throw()
{
	return ("Index Out of range!");
}

template <typename T>
T &Array<T>::operator[](int index)
{
	if (index < 0 || index >= static_cast<int>(this->_size))
		throw Array<T>::OutOfBoundsException();
	return (this->_array[index]);
}

template <typename T>
const T & Array<T>::operator[](int index)const
{
	if (index < 0 || index >= static_cast<int>(this->_size))
		throw Array<T>::OutOfBoundsException();
	return (this->_array[index]);
}

template <typename T>
unsigned int Array<T>::size(void)const
{
	return (this->_size);
}
