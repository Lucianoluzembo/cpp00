/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lluzembo <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/29 20:08:00 by lluzembo          #+#    #+#             */
/*   Updated: 2026/07/30 11:16:03 by lluzembo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Account.hpp"
#include <iostream>
#include <ctime>

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
    _accountIndex = _nbAccounts;
    _nbAccounts++;
    _amount = initial_deposit;
    _totalAmount += initial_deposit;
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "created\n";
}

Account::~Account()
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "closed\n";
}

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

void	Account::makeDeposit( int deposit )
{
   
    _totalAmount += deposit;
    _nbDeposits++;
    _totalNbDeposits++;

     _displayTimestamp();
     std::cout << "index:" << _accountIndex << ";";
     std::cout << "p_amount:" << _amount << ";";
     _amount += deposit;
     std::cout << "deposit:" << deposit << ";";
     std::cout << "amount:" << _amount << ";";
     std::cout << "nb_deposits:" << _nbDeposits << "\n";
}

bool	Account::makeWithdrawal(int withdrawal)
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "p_amount:" << _amount << ";";
    if (!(_amount >= withdrawal))
    {
        std::cout << "withdrawal:refused\n";
        return false;
    }
    _totalAmount -= withdrawal;
    _totalNbWithdrawals++;
    _nbWithdrawals++;
   
    _amount -=withdrawal;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "nb_withdrawals:" << _nbWithdrawals << "\n";
    return true;
}


int		Account::checkAmount() const
{
    return _amount;
}

void	Account::displayStatus( void ) const
{
    _displayTimestamp();
    std::cout << "index:" << _accountIndex << ";";
    std::cout << "amount:" << _amount << ";";
    std::cout << "deposits:" << _nbDeposits << ";";
    std::cout << "withdrawals:" << _nbWithdrawals << "\n";

    return ;
}


void	Account::_displayTimestamp( void )
{
    std::time_t agora = std::time(NULL);
    std::tm* tempo_local = std::localtime(&agora);

    char buffer[20];
    std::strftime(buffer, sizeof(buffer), "%Y%m%d_%H%M%S", tempo_local);

    std::cout << "[" << buffer << "] ";
}

void	Account::displayAccountsInfos()
{
    _displayTimestamp();
    std::cout << "accounts:" << _nbAccounts << ";";
    std::cout << "total:" << _totalAmount << ";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << ";\n";
    return ;
}
