/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:47:47 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/23 16:27:36 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &base);
		Fixed &operator=(const Fixed &base);
		Fixed(int const number);
		Fixed(float const fl);

		bool operator>(const Fixed &rhs)const;
		bool operator<(const Fixed &rhs)const;
		bool operator>=(const Fixed &rhs)const;
		bool operator<=(const Fixed &rhs)const;
		bool operator==(const Fixed &rhs)const;
		bool operator!=(const Fixed &rhs)const;

		Fixed operator+(const Fixed &rhs)const;
		Fixed operator-(const Fixed &rhs)const;
		Fixed operator*(const Fixed &rhs)const;
		Fixed operator/(const Fixed &rhs)const;

		Fixed &operator++(void);
		Fixed &operator--(void);

		Fixed operator++(int);
		Fixed operator--(int);

		static Fixed &min(Fixed &lhs, Fixed &rhs);
		static const Fixed &min(const Fixed &lhs, const Fixed &rhs);
		static Fixed &max(Fixed &lhs, Fixed &rhs);
		static const Fixed &max(const Fixed &lhs, const Fixed &rhs);



		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_nb;
		static const int	bits = 8;

};

std::ostream &operator<<(std::ostream &out, Fixed const & rhs);


#endif
