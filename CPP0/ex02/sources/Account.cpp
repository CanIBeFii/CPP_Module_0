#include "Account.hpp"
#include <iostream>

Account::Account( void ) {
	std::cout << "Account constructor called" << std::endl;
}

Account::Account( int initial_deposit ) {
	// std::cout << "Account constructor called" << std::endl;
	this->_amount = initial_deposit;
	this->_accountIndex = _nbAccounts;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_nbAccounts++;
	std::cout << "[0] index:" << _accountIndex;
	std::cout << ";amount:" << _amount << ";created" <<std::endl;
}

Account::~Account( void ) {
	_totalAmount -= this->_amount;
	_totalNbDeposits -= this->_nbDeposits;
	_totalNbWithdrawals -= this->_nbWithdrawals;
	_nbAccounts--;
	std::cout << "[0] index:" << _accountIndex;
	std::cout << ";amount:" << _amount << ";closed" << std::endl;
}

void Account::makeDeposit( int deposit ) {
	this->_amount += deposit;
	this->_nbDeposits++;
	_totalAmount += deposit;
	_totalNbDeposits++;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	if ( withdrawal > _amount )
		return ( false );
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	return ( true );
}

int	Account::checkAmount( void ) const {
	return ( _amount );
}

void	Account::displayStatus( void ) const {
	
} 

void	Account::displayAccountsInfos( void ) {
	std::cout << "[0] accounts:" << _nbAccounts << ";total:" << _totalAmount;
	std::cout << ";deposits:" << _totalNbDeposits;
	std::cout << ";withdrawals:" << _totalNbWithdrawals; 
}

int	Account::getNbAccounts( void ) {
	return _nbAccounts;
}

int	Account::getTotalAmount( void ) {
	return _totalAmount;
}

int	Account::getNbDeposits( void ) {
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return _totalNbWithdrawals;
}
