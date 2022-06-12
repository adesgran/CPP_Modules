/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:19:08 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/13 00:30:17 by adesgran         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <Account.hpp>
#include <iostream>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

void	Account::_displayTimestamp(void)
{
	time_t	now = time(0);
	tm	*loc_time = localtime(&now);

	std::cout << "[" << 1900 + loc_time->tm_year;
	if (loc_time->tm_mon < 10)
		std::cout << "0";
	std::cout << loc_time->tm_mon;
	if (loc_time->tm_mday < 10)
		std::cout << "0";
	std::cout << loc_time->tm_mday;
	std::cout << "_"; 
	if (loc_time->tm_hour < 10)
		std::cout << "0";
	std::cout << loc_time->tm_hour;
	if (loc_time->tm_min < 10)
		std::cout << "0";
	std::cout << loc_time->tm_min;
	if (loc_time->tm_sec < 10)
		std::cout << "0";
	std::cout << loc_time->tm_sec << "] " << std::endl;
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

void	Account::makeDeposit( int deposit )
{
	std::cout << "Deposit" << std::endl;
	this->_displayTimestamp();
	(void)deposit;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	std::cout << "Withdraw" << std::endl;
	(void)withdrawal;
	return (true);
}

int		Account::checkAmount( void ) const
{
	std::cout << "CheckAmount" << std::endl;
	return (0);
}

void	Account::displayStatus( void ) const
{
	std::cout << "DisplayStatus" << std::endl;
}

void	Account::displayAccountsInfos( void )
{
}
