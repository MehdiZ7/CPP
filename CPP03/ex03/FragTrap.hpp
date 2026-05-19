/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 15:28:37 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/24 17:32:36 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public virtual ClapTrap
{
	public:
		FragTrap(void);
		~FragTrap(void);
		FragTrap(std::string Name);
		FragTrap(FragTrap const &base);
		FragTrap &operator=(FragTrap const & base);

		void highFivesGuys(void);
		void attack(const std::string& target);

	private:

};

#endif
