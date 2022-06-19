/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hrecolet <hrecolet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/19 14:56:08 by hrecolet          #+#    #+#             */
/*   Updated: 2022/06/19 17:20:09 by hrecolet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <time.h>
#include <iostream>
#include <string>
#include <stdio.h>

//CONSTRUCTOR DESTRUCTOR

Account::Account(void)
{
	this->_nbAccounts++;
	this->_accountIndex = _nbAccounts--;
	this->_amount = 0;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";created" << std::endl;
}

Account::Account(int initial_deposit)
{
	this->_amount = initial_deposit;
	this->_totalAmount += initial_deposit;
	this->_nbAccounts++;
	this->_accountIndex = _nbAccounts - 1;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";created" << std::endl;
}

Account::~Account(void)
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";" << "amount:" << this->_amount << ";closed" << std::endl;
}

//ACCESSOR

int	Account::getNbDeposits(void)
{
	return (this->_totalNbDeposits);
}

int	Account::getTotalAmount(void)
{
	return (this->_totalAmount);
}

int	Account::getNbAccounts(void)
{
	return (this->_totalNbDeposits);
}

int	Account::getNbWithdrawals(void)
{
	return (this->_totalNbWithdrawals);
}

//FUNCTION

void	Account::displayAccountsInfos(void)
{
	this->_displayTimestamp();
	std::cout << " accounts:" << this->_nbAccounts <<  ";total:" << this->_totalAmount << ";deposits:" << this->_totalNbDeposits << ";withdrawals:" << this->_totalNbWithdrawals << std::endl;
}

void	Account::makeDeposit(int deposit)
{
	int	p_amount = this->_amount;
	
	this->_totalAmount += deposit;
	this->_amount += deposit;
	this->_totalNbDeposits++;
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";p_amoumt:" << p_amount << ";deposit:" << deposit << ";amount" << this->_amount << ";nb_deposit:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal(int withdrawal)
{
	this->_displayTimestamp();
	if (withdrawal > this->_amount)
	{
		std::cout << " index:" << this->_accountIndex << ";p_amoumt:" << this->_amount << ";withdrawal: refused" << std::endl;
		return (false);
	}
	else
	{
		int	p_amount = this->_amount;
		this->_amount -= withdrawal;
		this->_totalAmount -= withdrawal;
		this->_totalNbWithdrawals++;
		std::cout << " index:" << this->_accountIndex << ";p_amoumt:" << p_amount << ";withdrawal:" << withdrawal << ";amount:" << this->_amount << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
		return (true);
	}
}

int	Account::checkAmount(void) const
{
	return (this->_amount);
}

void	Account::displayStatus(void) const
{
	this->_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";amount:" << this->_amount << ";deposits:" << this->_nbDeposits << ";withdrawals:" << this->_nbWithdrawals << std::endl;
}

static void	Account::_displayTimestamp(void)
{
	time_t	now = time(0);
	struct tm 	t_struct;
	char		buff[80];
	t_struct = *localtime(&now);
	strftime(buff, sizeof(buff), "[%Y%m%d_%X]", &t_struct);
	std::cout << buff;
}
