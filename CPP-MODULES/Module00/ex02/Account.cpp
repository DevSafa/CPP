#include "Account.hpp"
#include <iostream>


int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;

Account::Account( int initial_deposit ){
    _displayTimestamp();
    this->_accountIndex = _nbAccounts;
    this->_amount = initial_deposit;
    _nbAccounts+=1;
    this->_nbDeposits = 0;
    this->_nbWithdrawals = 0;
    _totalAmount +=initial_deposit;
    std::cout << "index:"<<this->_accountIndex << ";";
    std::cout << "amount:"<<this->_amount<< ";";
    std::cout << "created"<< std::endl;
}

Account::~Account( void ){
   std::cout << "index:"<<this->_accountIndex << ";";
    std::cout << "amount:"<<this->_amount<< ";";
    std::cout << "closed"<< std::endl;
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
    std::cout << "accounts:" << _nbAccounts <<";";
    std::cout << "total:" << _totalAmount <<";";
    std::cout << "deposits:" << _totalNbDeposits << ";";
    std::cout << "withdrawals:" << _totalNbWithdrawals << std::endl;
}

void Account::makeDeposit( int deposit ){
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    std::cout << "deposit:" <<deposit << ";";
    this->_nbDeposits += 1;
    this->_amount += deposit;
    _totalAmount += deposit;
    _totalNbDeposits +=1;
    std::cout << "amount:" << this->_amount <<";";
    std::cout << "nb_deposits:" << this->_nbDeposits << std::endl;
}

bool Account::makeWithdrawal( int withdrawal ){
    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "p_amount:" << this->_amount << ";";
    
    if(this->_amount - withdrawal < 0)
    {
        std::cout << "withdrawal:" << "refused" << std::endl;
        return false;
    }
    this->_nbWithdrawals +=1;
    this->_amount -= withdrawal;
    std::cout << "withdrawal:" << withdrawal << ";";
    std::cout << "amount:"<<this->_amount<< ";";
    std::cout << "nb_withdrawals:" << this->_nbWithdrawals<< std::endl;
    this->_totalNbWithdrawals +=1;
    this->_totalAmount -=withdrawal;

    return true;
}



void	Account::displayStatus( void ) const{

    std::cout << "index:" << this->_accountIndex << ";";
    std::cout << "amount:" << this->_amount <<";";
    std::cout << "deposits:" <<this->_nbDeposits << ";";
    std::cout << "withdrawals:" << this->_nbWithdrawals << std::endl;
}

void Account::_displayTimestamp( void )
{
    // std::time_t result = std::time(nullptr);
    // std::cout <<std::asctime(std::localtime(&result))
    //                 <<result << std::endl;
    // time_t ttime = time(0);
    // std::cout << "Number of seconds elapsed since January 1, 1990:" << ttime << std::endl;
    // tm *local_time = localtime(&ttime);
    
    // std::cout << "Year: "<< 1900 + local_time->tm_year << std::endl;
    // std::cout << "Month: "<< 1 + local_time->tm_mon<< std::endl;
    // std::cout << "Day: "<< local_time->tm_mday << std::endl;
    // std::cout << "Time: "<< 1 + local_time->tm_hour << ":";
}