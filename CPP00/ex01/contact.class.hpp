/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/11 17:11:40 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/12 13:05:41 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
#define CONTACT_CLASS_H

#include <string>

class Contact {

	public:
		Contact(void);
		~Contact(void);
		void fillInfo(std::string fn, std::string ln, std::string nm, std::string pn, std::string ds);
		void printResult(int index);
		void printDetails(void);

	private:
		std::string	_firstName;
		std::string _lastName;
		std::string _nickName;
		std::string _phoneNumber;
		std::string _darkSecret;
};

#endif
