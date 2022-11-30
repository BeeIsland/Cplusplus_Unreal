#include "BankAccount.h"

BankAccount::BankAccount(): balance(0){}

vector<string> BankAccount::Report()
{

	vector<string> report;

	report.push_back("Balance is " + to_string(balance));
	report.push_back("Transactions: ");

	for (auto t : log)
	{
		report.push_back(t.Report());
	}

	report.push_back("------------------");

	return report;
}

bool BankAccount::Deposit(int amount)
{
	if (amount <= 0)
	{
		return false;
	}

	balance += amount;

	log.push_back(Transaction(amount, "Deposit"));
	return true;
}

bool BankAccount::Withdraw(int amount)
{
	if (amount <= 0)
	{
		return false;
	}

	if (balance >= amount)
	{
		balance -= amount;
		log.push_back(Transaction(amount, "Withdraw"));
		return true;
	}
	return false;
}
