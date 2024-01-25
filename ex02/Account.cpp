
#include <iostream>
#include "Account.hpp"

void	Account::makeDeposit( int deposit ){
	int num = checkAmount();
	_displayTimestamp();
	num = num + deposit;
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";p_amount:";
	std::cout << checkAmount();
	std::cout << ";deposit:";
	std::cout << deposit;
	_amount = num;
	_nbDeposits++;
	std::cout << ";amount:";
	std::cout << checkAmount();
	std::cout << ";nb_deposit:";
	std::cout << getNbDeposits();
	_totalAmount = _totalAmount + deposit;
}

bool	Account::makeWithdrawal( int withdrawal ){
	int num = checkAmount();
	_displayTimestamp();
	num = num - withdrawal;
	std::cout << "index:";
	std::cout << _accountIndex;
	std::cout << ";p_amount:";
	std::cout << checkAmount();
	std::cout << ";withdrawal:";
	if (num < 0){
		std::cout << "refused";
		return (false);
	}
	std::cout << withdrawal;
	_amount = num;
	_nbWithdrawals++;
	std::cout << ";amount:";
	std::cout << checkAmount();
	std::cout << ";nb_deposit:";
	std::cout << getNbDeposits();
	_totalAmount = _totalAmount - withdrawal;
	return (true);
}

void	Account::displayAccountsInfos( void ){
	_displayTimestamp();
	std::cout << "accounts:";
	std::cout << getNbAccounts();
	std::cout << ";total";
	std::cout << getTotalAmount();
	std::cout << ";deposits";
	std::cout << _totalNbDepositsDeposits;
	std::cout << ";deposits";
	std::cout << _totalNbWithdrawalsWithdrawals;
	std::cout << "\n";
}
