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
	int choice;
	do {
		system("cls");
		cout << "Welcome to " << bank.GetName() << endl;
		cout << "1) Add Account " << endl;
		cout << "2) Deposit" << endl;
		cout << "3) Withdraw" << endl;
		cout << "What would you like to do?" << endl;

		//int choice;
		cin >> choice;

		switch (choice)
		{
		case 1: AddAccountMenu(); break;
		case 2: TransactMenu(); break;
		case 3:
		default: break;
		}

		}while (choice != 10);

}


void AddAccountMenu()
{

	system("cls");
	cout << "customer first name: ";
	string firstName;
	cin >> firstName;
	
	cout << "customer last name: ";
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
	system("cls");
	cout << "Which Account?" << endl;
	cout << bank.ListAccounts() << endl; 

	int chosenAccount;
	cin >> chosenAccount;

	system("cls");
	cout << "1) Deposit" << endl; 
	cout << "2) Withdraw" << endl; 

	int transactionType;
	cin >> transactionType;

	system("cls");
	cout << "how many pennies? :";
	int pennies; 
	cin >> pennies; 

	switch (transactionType)
	{
	case 1: bank.Deposit(chosenAccount, pennies); break; 
	case 2: bank.Withdraw(chosenAccount, pennies);break; 
	default: break;
	}
	
}

void DisplayAccountMenu()
{
	system("cls");
	cout << bank.ShowAccounts();
	system("pause");

}