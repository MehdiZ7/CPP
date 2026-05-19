/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:30:41 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 11:44:21 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:

		void announce(void) const;
		Zombie(void);
		~Zombie(void);
		void	setName(std::string name);


	private:

		std::string	_name;

};

Zombie* zombieHorde( int N, std::string name );

#endif


