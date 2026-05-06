/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:50:32 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/29 17:54:13 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <limits>

Span::Span(unsigned int nb) : _size(nb)
{}

Span::Span(const Span & base) : _size(base._size), _v(base._v)
{}

Span &Span::operator=(const Span & base)
{
	if (this != &base)
	{
		this->_size = base._size;
		this->_v = base._v;
	}
	return (*this);
}

void Span::addNumber(int value)
{
	if (this->_v.size() == this->_size)
		throw Span::MaxReachedException();
	this->_v.push_back(value);
}

int Span::longestSpan(void)
{
	if (this->_v.size() < 2)
		throw Span::NoSpanException();
	std::vector<int>::iterator itmax = std::max_element(this->_v.begin(), this->_v.end());
	std::vector<int>::iterator itmin = std::min_element(this->_v.begin(), this->_v.end());
	return (*itmax - *itmin);
}

int Span::shortestSpan(void)
{
	if (this->_v.size() < 2)
		throw Span::NoSpanException();
	std::vector<int> cpy = this->_v;

	std::sort(cpy.begin(), cpy.end());
	int min = std::numeric_limits<int>::max();
	for (std::vector<int>::iterator it = cpy.begin(); it != cpy.end() - 1; ++it)
	{
		std::vector<int>::iterator next = it + 1;
		if (min > *next - *it)
			min = *next - *it;
	}
	return (min);
}
