#pragma once
#include "Account.h"
class CheckingAccount:public Account
{
	friend std::ostream& operator<<(std::ostream& os, const CheckingAccount& cacc);
private:
	static constexpr const char* defName = "Unnamed Checking Account";
	static constexpr double defBalance = 0.0;
	static constexpr double baseFee = 1.5;
public:
	CheckingAccount(std::string name = defName, double balance = defBalance);
	bool withdraw(double amount);
};

