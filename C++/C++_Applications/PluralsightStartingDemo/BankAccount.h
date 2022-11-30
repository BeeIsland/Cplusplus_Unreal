#pragma once

#include <vector>
using std::vector;

#include <string>
using std::string;
using std::to_string;

#include "Transaction.h"

class BankAccount
{
	

private:

	int balance;
	vector<Transaction> log;

public:

	BankAccount();
	vector<string> Report();
	bool Deposit(int amount);
	bool Withdraw(int amount);
	int GetBalance(int balance) { return balance; }

};

