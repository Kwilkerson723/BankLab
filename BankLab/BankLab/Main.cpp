#include "Bank.h"
#include <iostream>
using namespace std;
Bank bank = Bank("Awesome bank");


void DisplayMenu();
void AddAccountMenu();
void TransactMenu();

int main()
{

	DisplayMenu();


	system("pause");

	return 0;
}


void DisplayMenu()
{
	system("cls");
	cout << "Welcome to " << bank.GetName() << endl; 
	cout << "1) Add Account " << endl; 
	cout << "2) Deposit" << endl; 
	cout << "3) Withdraw" << endl; 
	cout << "What would you like to do?" << endl; 
	
	int choice;
	cin >> choice;

	switch (choice)
	{
	case 1: AddAccountMenu(); break;
	case 2: TransactMenu(); break;
	case 3: 
	default: break;
	
	}

}


void AddAccountMenu()
{
	cout << "customer first name: ";
	string firstName;
	cin >> firstName;
	
	cout << "customer las name: ";
	string lastName;
	cin >> lastName;


	cout << "Account Number: ";
	int accountNumber;
	cin >> accountNumber;

	Customer customer = Customer(firstName, lastName);
	Account newAccount = Account(customer, accountNumber);
	bank.CreateAccount(newAccount);

}


void TransactMenu()
{

}