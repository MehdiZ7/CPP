/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/29 15:50:30 by mzouhir           #+#    #+#             */
/*   Updated: 2026/04/30 12:07:10 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		Span(void);
		unsigned int		_size;
		std::vector<int> 	_v;

	public:
		Span(unsigned int nb);
		Span(const Span & base);
		Span &operator=(const Span & base);
		void addNumber(int value);

		template <typename T>
		void addNumber(T begin, T end)
		{
			long dist = std::distance(begin, end);

			if (this->_v.size() + dist > this->_size)
				throw MaxReachedException();
			this->_v.insert(this->_v.end(), begin, end);
		}

		int longestSpan(void);
		int shortestSpan(void);
		class MaxReachedException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Maximum number of value reached");
				}
		};

		class NoSpanException : public std::exception
		{
			public:
				virtual const char * what() const throw()
				{
					return ("Insufficent number of value to find a span");
				}
		};
};
