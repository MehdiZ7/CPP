/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 14:21:23 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/26 15:36:36 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
#define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
		public:
			MateriaSource(void);
			~MateriaSource(void);
			MateriaSource(const MateriaSource & base);
			MateriaSource &operator=(const MateriaSource & base);

			void learnMateria(AMateria* m);
			AMateria* createMateria(std::string const & type);

		private:
			AMateria*	_list[4];
};

#endif
