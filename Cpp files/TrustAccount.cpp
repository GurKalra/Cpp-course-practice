#include "TrustAccount.h"

TrustAccount::TrustAccount(std::string name, double balance, double intRate) :SavingsAccount{ name, balance, intRate }, withdrawVal{ 0 } {}

std::ostream& operator<<(std::ostream& os, const TrustAccount& tacc)
{
	os << "Trust Account Name: " << tacc.name << std::endl << "Trust Account Balance: " << tacc.balance << std::endl;
	return os;
}

bool TrustAccount::deposit(double amount)
{
	if (amount >= 5000.00)
		amount += 50.00;
	return SavingsAccount::deposit(amount);
}

bool TrustAccount::withdraw(double amount)
{
	if (withdrawVal > 3 || amount > balance * 0.2)
		return false;
	else {
		++withdrawVal;
		return SavingsAccount::withdraw(amount);
	}
}