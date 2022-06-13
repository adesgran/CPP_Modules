/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adesgran <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 12:19:08 by adesgran          #+#    #+#             */
/*   Updated: 2022/06/13 13:26:42 by adesgran         ###   ########.fr       */
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
	std::cout << loc_time->tm_sec << "] ";
}

Account::Account(int initial_deposit)
{
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
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount << ";closed" << std::endl;
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
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount;
	this->_amount += deposit;
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	Account::_totalAmount += deposit;
	std::cout << ";deposit:" << deposit  <<";amount:" << this->_amount << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";p_amount:" << this->_amount << ";withdrawal:";
	if (withdrawal > this->_amount)
	{
		std::cout << "refused" << std::endl;
		return (false);
	}
	this->_amount -= withdrawal;
	this->_nbWithdrawals++;
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	std::cout << withdrawal  <<";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals<< std::endl;
	return (true);
}

int		Account::checkAmount( void ) const
{
	std::cout << "CheckAmount" << std::endl;
	return (0);
}

void	Account::displayStatus( void ) const
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

void	Account::displayAccountsInfos( void )
{
	Account::_displayTimestamp();
	std::cout << "accounts:" << Account::_nbAccounts << ";total:" << Account::_totalAmount << ";deposits:" << Account::_totalNbDeposits << ";withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}
