/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oryzon <oryzon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 20:28:09 by oryzon            #+#    #+#             */
/*   Updated: 2022/10/05 01:37:41 by oryzon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <string>

// static attributes

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_nbAccounts++;
	this->_accountIndex = this->_nbAccounts - 1;
	this->_amount = 0;
	
	_displayTimestamp();
	std::cout <<" index:" << _accountIndex 
		<< ";amount:" << _amount << ";created" << std::endl;
}

Account::~Account(void)
{

}
