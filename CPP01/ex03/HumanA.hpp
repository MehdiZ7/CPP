/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/20 12:41:31 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/20 14:24:12 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"
#include "iostream"

class HumanA{

	public:
		HumanA(std::string name, Weapon& weapon);
		~HumanA(void);
		void	attack(void)const;

	private:

	std::string _name;
	Weapon& _weapon;

};

#endif
