/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:02:53 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/21 19:09:24 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <stack>
#include <algorithm>
#include <sstream>
#include <cctype>

class RPN
{
	private:
		std::stack<int> _rpn;

	public:
		RPN(void);
		~RPN(void);
		RPN(const RPN & base);
		RPN &operator=(const RPN & base);

		void calcul(const std::string & math);
};
