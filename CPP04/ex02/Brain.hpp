/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:08:55 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/25 17:00:03 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
	public:
		Brain(void);
		~Brain(void);
		Brain(const Brain & base);
		Brain &operator=(const Brain & base);

		void setIdea(int index, std::string idea);
		std::string getIdea(int index)const;

	private:
		std::string _ideas[100];
};

#endif
