#pragma once
#include "SavingsAccount.h"
class TrustAccount:public SavingsAccount
{
	friend std::ostream& operator<<(std::ostream& os, const TrustAccount& sacc);
private:
	static constexpr const char* defName = "Unnamed Savings Account";
	static constexpr double defBalance = 0.0;
	static constexpr double defIntRate = 0.0;
protected:
	int withdrawVal;
public:
	TrustAccount(std::string name = defName, double balance = defBalance, double intRate = defIntRate);
	bool withdraw(double amount);
	bool deposit(double amount);
};

