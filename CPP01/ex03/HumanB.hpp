/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 12:41:14 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 14:18:48 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB{

	public:

		HumanB(std::string name);
		~HumanB(void);
		void attack(void)const;
		void setWeapon(Weapon& war);

	private:

		Weapon* _weapon;
		std::string _name;
};

#endif
