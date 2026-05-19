/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 11:47:47 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/23 14:19:16 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

class	Fixed
{
	public:
		Fixed(void);
		~Fixed(void);
		Fixed(const Fixed &base);
		Fixed &operator=(const Fixed &base);


		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int					_nb;
		static const int	bits = 8;

};

#endif
