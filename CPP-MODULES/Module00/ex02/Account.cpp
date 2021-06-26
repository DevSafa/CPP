#include "Account.hpp"
#include <iostream>


Account::Account( int initial_deposit ){
    this->_nbDeposits = initial_deposit;
}

Account::~Account( void ){

}
int Account::getNbAccounts( void ){
    return Account::_nbAccounts;
}

int Account::getTotalAmount( void ){
    return Account::_totalAmount;
}

int Account::getNbDeposits( void ){
    return Account::_totalNbDeposits;
}

int Account::getNbWithdrawals( void ){
    return Account::_totalNbWithdrawals;
}

void Account::displayAccountsInfos( void ){
    std::cout << "number of accounts" << Account::getNbAccounts() << std::endl;
    std::cout << "Total amount" << Account::getTotalAmount() << std::endl;
    std::cout << "number of deposits" << Account::getNbDeposits() << std::endl;
    std::cout << "number with drawals" << Account::getNbWithdrawals() << std::endl;
}

void Account::makeDeposit( int deposit ){
    this->_nbDeposits+= deposit;
}

bool Account::makeWithdrawal( int withdrawal ){
    this->_nbWithdrawals-= withdrawal;
    if(this->_nbWithdrawals < 0)
        return false;
    return true;

}

int	Account::checkAmount( void ) const{
    return this->_amount;
}

void	Account::displayStatus( void ) const{
    std::cout << "account status" << std::endl;
}

void Account::_displayTimestamp( void )
{

}