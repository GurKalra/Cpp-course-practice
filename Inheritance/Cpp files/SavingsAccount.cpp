#include "SavingsAccount.h"
#include "Account.h"
#include <string>

SavingsAccount::SavingsAccount(std::string name, double balance, double intRate) :Account{name,balance}, intRate{intRate} {}

std::ostream& operator<<(std::ostream& os, const SavingsAccount& sacc)
{
	os << "Savings Account Name: " << sacc.name << std::endl << "Savings Account Balance: " << sacc.balance << std::endl;
	return os;
}

bool SavingsAccount::deposit(double amount)
{
	amount += amount * (intRate / 100);
	return Account::deposit(amount);
}

