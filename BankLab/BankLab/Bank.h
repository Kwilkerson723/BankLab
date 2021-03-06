#pragma once
#include <vector>
#include "Account.h"
class Bank
{
private:
	std::string _name;
	std::vector<Account> _accounts;
public:
	Bank(std::string name);
	~Bank();

	std::string GetName();
	std::vector<Account> GetAccounts();
	bool OpenAccount(Account account, int startingPennies);
	void CreateAccount(Account newAccount);
	std::string ShowAccounts();

	std::string ListAccounts();

	void Deposit(int accountNumber, int amount);
	void Withdraw(int accountNumber, int amount);
	

	

};