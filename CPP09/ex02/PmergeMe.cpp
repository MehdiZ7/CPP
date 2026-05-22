/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 11:08:13 by mzouhir           #+#    #+#             */
/*   Updated: 2026/05/22 19:19:51 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe(void)
{}

PmergeMe::~PmergeMe(void)
{}

PmergeMe::PmergeMe(const PmergeMe & base)
{
	this->_deque = base._deque;
	this->_vector = base._vector;
}

PmergeMe &PmergeMe::operator=(const PmergeMe & base)
{
	if (this != &base)
	{
		this->_vector = base._vector;
		this->_deque = base._deque;
	}
	return (*this);
}

bool PmergeMe::verifiyDigit(const std::string & input)
{
	for (size_t i = 0; i < input.size(); ++i)
	{
		if (i == 0 && input[i] == '+' && input.size() > 1)
			continue ;
		if (i == 0 && input[i] == '-')
			return (false);
		if (!isdigit(input[i]))
			return (false);
	}
	char *endptr;
	long res = std::strtol(input.c_str(), &endptr, 10);
	if (*endptr != '\0' || res > INT_MAX)
		return (false);
	this->_vector.push_back(res);
	this->_deque.push_back(res);
	return (true);
}


void PmergeMe::sortPairs(std::vector<std::pair<int, int> > & pair, int left, int right)
{
	if (left >= right)
	return;
	int mid = left + (right - left) / 2;
	this->sortPairs(pair, left, mid);
	this->sortPairs(pair, mid + 1, right);
	mergePairs(pair, left, mid, right);
}

void PmergeMe::mergePairs(std::vector<std::pair<int, int> > & pair, int left, int mid, int right)
{
	int n1 = mid - left + 1;
	int n2 = right - mid;
	std::vector<std::pair<int, int> > left_array(n1);
	std::vector<std::pair<int, int> > right_array(n2);

	for (int i = 0; i < n1; ++i)
	{
		left_array[i] = pair[left + i];
	}
	for (int j = 0; j < n2 ; ++j)
	{
		right_array[j] = pair[mid + 1 + j];
	}
	int i = 0;
	int j = 0;
	int k = left;

	while (i < n1 && j < n2)
	{
		if (left_array[i].first <= right_array[j].first)
		{
			pair[k] = left_array[i];
			++i;
		}
		else
		{
			pair[k] = right_array[j];
			++j;
		}
		++k;
	}
	while (i < n1)
	{
		pair[k] = left_array[i];
		++k;
		++i;
	}
	while (j < n2)
	{
		pair[k] = right_array[j];
		++k;
		++j;
	}
}

std::vector<int> PmergeMe::jacobsthalSuite(int size)
{
	std::vector<int> suite;
	suite.push_back(0);
	suite.push_back(1);
	suite.push_back(1);
	suite.push_back(3);

	int i = 4;
	while (1)
	{
		int res = suite[i - 1] + 2 * suite[i - 2];
		suite.push_back(res);
		++i;
		if (res > size)
			break ;
	}
	return (suite);
}

void PmergeMe::sortVector(void)
{
	std::vector<std::pair<int, int> > Pvector;
	int orphan = -1;
	bool isorphan = false;

	if (this->_vector.size() % 2 != 0)
	{
		orphan = this->_vector.back();
		this->_vector.pop_back();
		isorphan = true;
	}

	for (size_t i = 0; i < this->_vector.size(); i += 2)
	{
		if (this->_vector[i] > this->_vector[i + 1])
			Pvector.push_back(std::make_pair(this->_vector[i], this->_vector[i + 1]));
		else
			Pvector.push_back(std::make_pair(this->_vector[i + 1], this->_vector[i]));
	}
	sortPairs(Pvector, 0, Pvector.size() - 1);
	if (Pvector.empty())
	{
		if (isorphan)
			this->_vector.push_back(orphan);
		return;
	}
	std::vector<int> mainchain;
	std::vector<int> pend;

	mainchain.push_back(Pvector[0].second);
	for (size_t i = 0; i < Pvector.size(); ++i)
	{
		mainchain.push_back(Pvector[i].first);
		if (i != 0)
			pend.push_back(Pvector[i].second);
	}
	if (isorphan)
		pend.push_back(orphan);
	std::vector<int> jacob = this->jacobsthalSuite(pend.size());
	int token_in = 0;

	for (size_t i = 3; i < jacob.size(); ++i)
	{
		size_t group_size = jacob[i] - jacob[i - 1];
		size_t index_max = token_in + group_size - 1;
		if (index_max >= pend.size())
			index_max = pend.size() -1 ;
		for (size_t j = index_max; j >= token_in; --j)
		{
			std::vector<int>::iterator it = std::lower_bound(mainchain.begin(), mainchain.end(), pend[j]);
			mainchain.insert(it, pend[j]);
		}
		token_in += group_size;
	}
	this->_vector = mainchain;
}

void PmergeMe::sortDeque(void)
{
	std::deque<std::pair<int, int> > Pdeque;
	int orphan = -1;
	bool isorphan = false;

	if (this->_deque.size() % 2 != 0)
	{
		orphan = this->_deque.back();
		this->_deque.pop_back();
		isorphan = true;
	}

	for (size_t i = 0; i < this->_deque.size(); i += 2)
	{
		if (this->_deque[i] > this->_deque[i + 1])
			Pdeque.push_back(std::make_pair(this->_deque[i], this->_deque[i + 1]));
		else
			Pdeque.push_back(std::make_pair(this->_deque[i + 1], this->_deque[i]));

	}
}

