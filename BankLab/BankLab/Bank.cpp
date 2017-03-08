#include "Bank.h"

Bank::Bank(std::string name) : _name(name)
{
}

Bank::~Bank()
{
}

std::string Bank::GetName()
{
	return _name;
}

std::vector<Account> Bank::GetAccounts()
{
	return _accounts;
}

bool Bank::OpenAccount(Account account, int startingPennies)
{
	account.Deposit(startingPennies);
	_accounts.push_back(account);
	return true;
}

void Bank::CreateAccount(Account newAccount)
{
	_accounts.push_back(newAccount);
}

std::string Bank::ShowAccounts() 
{

	{
		void ShowAccounts();
		std::string output = "accounts for " + _name + "\n";
		for (auto account : _accounts)
		{
			output += std::to_string(account.getAccountNumber()) += "\n";
			return output;
		}

	}

}

std::string Bank::ListAccounts()
{
	return std::string();
}

void Bank::Deposit(int accountNumber, int amount)
{
	for(Account account : _accounts) {
		if (account.getAccountNumber == accountNumber) {
			account.Deposit(amount);
			return;
		}

	}

}
