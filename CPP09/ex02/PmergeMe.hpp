/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:08:15 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/22 19:00:13 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <ctime>
#include <string>
#include <vector>
#include <deque>
#include <iostream>
#include <cstdlib>
#include <climits>
#include <cctype>

class PmergeMe
{
	private:
		std::vector<int> _vector;
		std::deque<int> _deque;

		void sortPairs(std::vector<std::pair<int, int> > & pairs, int left, int right);
		void mergePairs(std::vector<std::pair<int, int> > & pairs, int left, int mid, int right);

		std::vector<int> jacobsthalSuite(int size);

	public:
		PmergeMe(void);
		~PmergeMe(void);
		PmergeMe(const PmergeMe & base);
		PmergeMe &operator=(const PmergeMe & base);

		bool verifiyDigit(const std::string & input);

		void sortVector(void);
		void sortDeque(void);




};
