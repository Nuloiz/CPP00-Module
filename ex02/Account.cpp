
#include <iostream>
#include "Account.hpp"

void	Account::makeDeposit( int deposit ){
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";p_amount:";
	std::cout << _amount;
	std::cout << ";deposit:";
	std::cout << deposit;
	_amount += deposit;
	_nbDeposits++;
    _totalNbDeposits++;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";nb_deposit:\n";
	std::cout << _nbDeposits;
	_totalAmount = _totalAmount + deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
	_displayTimestamp();
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";p_amount:";
	std::cout << _amount;
	std::cout << ";withdrawal:";
	if (_amount - withdrawal < 0){
		std::cout << "refused";
		return (false);
	}
	std::cout << withdrawal;
	_amount -= withdrawal;
	_nbWithdrawals++;
    _totalNbWithdrawals++;
	std::cout << ";amount:";
	std::cout << _amount;
	std::cout << ";nb_deposit:\n";
	std::cout << _nbWithdrawals;
	_totalAmount = _totalAmount - withdrawal;
	return (true);
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:";
	std::cout << _nbAccounts;
	std::cout << ";total";
	std::cout << _totalAmount;
	std::cout << ";deposits";
	std::cout << _totalNbDeposits;
	std::cout << ";deposits";
	std::cout << _totalNbWithdrawals;
	std::cout << "\n";
}

void	Account::displayStatus( void ) const{
    _displayTimestamp();
    std::cout << "index:";
    std::cout << _accountIndex;
    std::cout << ";p_amount:";
    std::cout << _amount;
    std::cout << ";deposits:";
    std::cout << _nbDeposits;
    std::cout << ";withdrawals:\n";
    std::cout << _nbWithdrawals;
}