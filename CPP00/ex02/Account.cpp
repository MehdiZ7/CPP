/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzouhir <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/13 15:05:12 by mzouhir           #+#    #+#             */
/*   Updated: 2026/03/18 13:18:36 by mzouhir          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>
#include <iomanip>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

int	Account::getNbAccounts(void)
{
	return (_nbAccounts);
}
int	Account::getTotalAmount(void)
{
	return (_totalAmount);
}
int	Account::getNbDeposits(void)
{
	return (_totalNbDeposits);
}
int	Account::getNbWithdrawals(void)
{
	return (_totalNbWithdrawals);
}
Account::Account(int initial_deposit) : _accountIndex(_nbAccounts), _amount(initial_deposit), _nbDeposits(0), _nbWithdrawals(0)
{
	_nbAccounts++;
	_totalAmount += initial_deposit;
	Account::_displayTimestamp();
	std::cout << "index:" <<  _accountIndex << ";";
	std::cout << "amount:" <<  _amount << ";";
	std::cout << "created" << std::endl;

}

Account::~Account()
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:" << _amount << ";";
	std::cout << "closed" << std::endl;
	_nbAccounts--;
}

void	Account::_displayTimestamp(void)
{
	std::time_t now = std::time(NULL);
	std::tm *ltm = std::localtime(&now);
	std::cout << "[" << 1900 + ltm->tm_year;
	std::cout << std::setfill('0') << std::setw(2) << 1 + ltm->tm_mon;
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_mday;
	std::cout << "_"<< std::setfill('0') << std::setw(2) << ltm->tm_hour;
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_min;
	std::cout << std::setfill('0') << std::setw(2) << ltm->tm_sec<< "] ";
}

void Account::displayAccountsInfos(void)
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";";
	std::cout << "total:"<< _totalAmount << ";";
	std::cout << "deposits:"<<_totalNbDeposits<<";";
	std::cout << "withdrawals:"<<_totalNbWithdrawals<<std::endl;
}

void Account::makeDeposit(int deposit)
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:"<< _amount << ";";
	std::cout << "deposit:"<< deposit << ";";

	_totalAmount += deposit;
	_totalNbDeposits++;
	this->_amount += deposit;
	this->_nbDeposits += 1;

	std::cout << "amount:"<< _amount << ";";
	std::cout << "nb_deposits:" << _nbDeposits << std::endl;
}

bool Account::makeWithdrawal(int withdrawal)
{
	if (withdrawal > this->_amount)
	{
		Account::_displayTimestamp();
		std::cout << "index:" <<  _accountIndex << ";";
		std::cout << "p_amount:" <<  _amount << ";";
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	_totalAmount-= withdrawal;
	_totalNbWithdrawals++;
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "p_amount:"<< this->_amount + withdrawal << ";";
	std::cout << "withdrawal:"<<withdrawal<<";";
	std::cout << "amount:"<<this->_amount<<";";
	std::cout << "nb_withdrawals:" << this->_nbWithdrawals<<std::endl;
	return (true);
}

void	Account::displayStatus(void)const
{
	Account::_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";";
	std::cout << "amount:"<< this->_amount << ";";
	std::cout << "deposits:"<<this->_nbDeposits<<";";
	std::cout << "withdrawals:"<<this->_nbWithdrawals<<std::endl;
}

int	Account::checkAmount(void)const
{
	return (this->_amount);
}
