/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 12:41:27 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 14:21:35 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>

class Weapon{

	public:

		Weapon(std::string type);
		~Weapon(void);
		std::string getType(void) const;
		void	setType(std::string newType);

	private:

		std::string _type;
};

#endif
