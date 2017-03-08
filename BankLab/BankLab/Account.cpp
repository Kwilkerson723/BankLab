#include "Account.h"
#include "Customer.h"




Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}

void Account::Deposit(int numberOfPennies)
{//TODO: Add a message to the log
	_balanceInPennies += numberOfPennies;
	std::string message = "Deposited " + std::to_string(numberOfPennies);
	_log.push_back(message);
}

void Account::Withdraw(int numberOfPennies)
{//TODO: Add a message to the log
	_balanceInPennies -= numberOfPennies;
	std::string message = "Withdrew " + std::to_string(numberOfPennies);
	_log.push_back(message);
}

int Account::getBalance()
{//add a way to get number of pennies
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

std::string Account::getCustomerInfo()
{
	
	return _accountOwner.getFullName();
}
