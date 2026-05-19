/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 13:30:41 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 11:13:15 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>

class Zombie
{
	public:

		void announce(void) const;
		Zombie(std::string name);
		~Zombie(void);


	private:

		std::string	_name;

};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif


