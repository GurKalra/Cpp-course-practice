#include "CheckingAccount.h"
#include "Account.h"

std::ostream& operator<<(std::ostream& os, const CheckingAccount& cacc)
{
	os << "Checking Account Name: " << cacc.name << std::endl << "Checking Account Balance: " << cacc.balance << std::endl;
	return os;
}

CheckingAccount::CheckingAccount(std::string name, double balance) :Account{ name,balance } {}

bool CheckingAccount::withdraw(double amount)
{
	amount += baseFee;
	return Account::withdraw(amount);
}





