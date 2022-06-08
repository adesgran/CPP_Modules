/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:19:08 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/08 13:10:03 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
#include <iostream>
#include <time.h>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t		now;
	struct tm	*tm_now;

	now = time(0);
	tm_now = gmtime(&now);
	std::cout << tm_now->tm_year << tm_now->tm_mon << tm_now->tm_mday << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_displayTimestamp();
	this->_amount = initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	if (Account::_nbAccounts)
	{
		this->_accountIndex = Account::_nbAccounts;
		Account::_nbAccounts++;
		Account::_totalAmount += this->_amount;
	}
	else
	{
		this->_accountIndex = 0;
		Account::_nbAccounts = 1;
		Account::_totalAmount = this->_amount;
		Account::_totalNbDeposits = 0;
		Account::_totalNbWithdrawals = 0;
	}
}

Account::~Account(void)
{

};

int	Account::getNbAccounts(void)
{
	return (Account::_nbAccounts);
}

int	Account::getTotalAmount(void)
{
	return (Account::_totalAmount);
}

int	Account::getNbDeposits(void)
{
	return (Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

