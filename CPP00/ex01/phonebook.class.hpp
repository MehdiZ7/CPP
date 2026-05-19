/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:09:15 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/12 16:36:16 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
#define PHONEBOOK_CLASS_H

#include "contact.class.hpp"

class Phonebook {

	public:
		Phonebook(void);
		~Phonebook(void);
		void	addContact(void);
		void	searchContact(void);


	private:
		Contact	_contact[8];
		static int	_index;
		static int	_count;
		std::string	getInput(std::string prompt);

};

#endif
