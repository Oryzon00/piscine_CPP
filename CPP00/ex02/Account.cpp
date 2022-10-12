/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ajung <ajung@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:28:09 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/12 13:56:33 by ajung            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>

// class static attributes ------------------------------------------

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

//Accessor of class static attributes --------------------------------

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

void	Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout <<
		"accounts:" << _nbAccounts << ";" <<
		"total:" << _totalAmount << ";" <<
		"deposits:" << _totalNbDeposits << ";" <<
		"withdrawals:" << _totalNbWithdrawals << std::endl;
}

// display time stamp -------------------------------------------------

void	Account::_displayTimestamp(void)
{
	time_t	sec = time(NULL);
	struct tm	*time_now;
	char	str[20];
	
	time_now = localtime(&sec);
	strftime(str, sizeof(str), "[%Y%m%d_%H%M%S]", time_now);
	std::cout << str << " ";
}

//Constructor - Destructor --------------------------------------------

Account::Account(int initial_deposit)
{
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = initial_deposit;
	_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"amount:" << this->_amount << ";" <<
		"created" << std::endl;
	return ;
}

Account::~Account(void)
{
	_nbAccounts--;
	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"amount:" << this->_amount << ";" <<
		"closed" << std::endl;
	return ;
}

// Fonction member public ---------------------------------------------

void	Account::makeDeposit(int deposit)
{
	int	p_amount = this->_amount;
	this->_amount += deposit;
	_totalAmount += deposit;
	this->_nbDeposits++;
	_totalNbDeposits++;
	
	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"p_amount:" << p_amount << ";" <<
		"deposit:" << deposit << ";" <<
		"amount:" << this->_amount << ";"
		"nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"p_amount:" << this->_amount << ";" <<
		"withdrawal:";
	if (this->_amount >= withdrawal)
	{
		this->_amount -= withdrawal;
		_totalAmount -= withdrawal;
		this->_nbWithdrawals++;
		_totalNbWithdrawals++;

		std::cout <<
			withdrawal << ";" <<
			"amount:" << this->_amount << ";" <<
			"nb_withdrawals:" << this->_nbWithdrawals << std::endl;
			return (true);
	}
	else
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
}

int		Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"amount:" << this->_amount << ";" <<
		"deposits:" << this->_nbDeposits << ";" <<
		"withdrawals:" << this->_nbWithdrawals << std::endl;
}

// -----------------------------------------------------------------------------

Account::Account(void)
{
	this->_accountIndex = _nbAccounts;
	this->_accountIndex = _nbAccounts;
	_nbAccounts++;
	this->_amount = 0;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout <<
		"index:" << this->_accountIndex << ";" <<
		"amount:" << this->_amount << ";" <<
		"created" << std::endl;
	return ;
}
