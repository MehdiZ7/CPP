/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 13:02:55 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/21 19:09:15 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

RPN::RPN(void)
{}

RPN::~RPN(void)
{}

RPN::RPN(const RPN & base)
{
	this->_rpn = base._rpn;
}

RPN &RPN::operator=(const RPN & base)
{
	if (this != &base)
	{
		this->_rpn = base._rpn;
	}
	return (*this);
}

void RPN::calcul(const std::string & math)
{
	std::istringstream str(math);
	std::string token;
	while (str >> token)
	{
		if (token.size() != 1)
		{
			std::cerr << "Error" << std::endl;
			return ;
		}
		else if (isdigit(token[0]))
		{
			int i = token[0] - '0';
			this->_rpn.push(i);
		}
		else if (token[0] == '+' || token[0] == '-' || token[0] == '/' || token[0] == '*')
		{
			if (this->_rpn.size() < 2)
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			int a = this->_rpn.top();
			this->_rpn.pop();
			int b = this->_rpn.top();
			this->_rpn.pop();
			if (token[0] == '/' && a == 0)
			{
				std::cerr << "Error" << std::endl;
				return ;
			}
			int res;
			switch (token[0])
			{
				case '+':
					res = b + a;
					break ;
				case '-':
					res = b - a;
					break;
				case '/':
					res = b / a;
					break;
				case '*':
					res = b * a;
					break;
				default:
					std::cerr << "Error" << std::endl;
					return;
			}
			this->_rpn.push(res);
		}
		else
		{
			std::cerr << "Error" << std::endl;
			return;
		}
	}
	if (this->_rpn.size() != 1)
	{
		std::cerr << "Error" << std::endl;
		return;
	}
	std::cout << this->_rpn.top() << std::endl;
}
