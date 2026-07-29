/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:08:00 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/29 21:39:06 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>


int	Account::getNbAccounts()
{
    return _nbAccounts;
}
int	Account::getTotalAmount()
{
    return _totalAmount;
}
int	Account::getNbDeposits()
{
    return _totalNbDeposits;
}
int	Account::getNbWithdrawals()
{
    return _totalNbWithdrawals;
}

void	Account::displayAccountsInfos()
{
    std::cout << "index:" << _nbAccounts << ";";
    std::cout << "amount" << _totalAmount << ";";
}

void	Account::makeDeposit( int deposit )
{
    _amount += deposit;
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _amount -=withdrawal;
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    _nbWithdrawals++;
    return true;
}


int		Account::checkAmount() const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    std::cout << "index:" << _nbAccounts << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "deposits:" << _nbWithdrawals << ";";

    return ;
}
