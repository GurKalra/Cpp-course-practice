#include "Account_util.h"
#include "Account.h"
#include "SavingsAccount.h"

void display(const std::vector<Account>& accounts)
{
	std::cout << "\n===Accounts=====================================================" << std::endl;
	for (const auto& acc : accounts)
		std::cout << acc << std::endl;
}

void deposit(std::vector<Account>& accounts, double amount)
{
	std::cout << "\n===Depositing==============================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.deposit(amount))
			std::cout << "Deposited" << std::endl;
		else
			std::cout << "Failed" << std::endl;
	}
}

void withdraw(std::vector<Account>& accounts, double amount)
{
	std::cout << "\n===Withdrawing==============================" << std::endl;
	for (auto& acc : accounts) {
		if (acc.withdraw(amount))
			std::cout << "Withdrawed" << std::endl;
		else
			std::cout << "Failed" << std::endl;
	}
}

void display(const std::vector<SavingsAccount>& saccounts)
{
	std::cout << "\n===Accounts=====================================================" << std::endl;
	for (const auto& sacc : saccounts)
		std::cout << sacc << std::endl;
}

void deposit(std::vector<SavingsAccount>& saccounts, double amount)
{
	std::cout << "\n===Depositing==============================" << std::endl;
	for (auto& sacc : saccounts) {
		if (sacc.deposit(amount))
			std::cout << "Deposited" << std::endl;
		else
			std::cout << "Failed" << std::endl;
	}
}

void withdraw(std::vector<SavingsAccount>& saccounts, double amount)
{
	std::cout << "\n===Withdrawing==============================" << std::endl;
	for (auto& sacc : saccounts) {
		if (sacc.withdraw(amount))
			std::cout << "Withdrawed" << std::endl;
		else
			std::cout << "Failed" << std::endl;
	}
}

void display(const std::vector<CheckingAccount>& caccounts)
{
	std::cout << "\n===Accounts=====================================================" << std::endl;
	for (const auto& cacc : caccounts)
		std::cout << cacc << std::endl;
}

void deposit(std::vector<CheckingAccount>& caccounts, double amount)
{
	std::cout << "\n===Depositing==============================" << std::endl;
	for (auto& cacc : caccounts) {
		if (cacc.deposit(amount))
			std::cout << "Deposited" << std::endl;
		else
			std::cout << "Failed" << std::endl;
	}
}

void withdraw(std::vector<CheckingAccount>& caccounts, double amount)
{
	std::cout << "\n===Withdrawing==============================" << std::endl;
	for (auto& cacc : caccounts) {
		if (cacc.withdraw(amount))
			std::cout << "Withdrawed" << std::endl;
		else
			std::cout << "Failed" << std::endl;
	}
}

void display(const std::vector<TrustAccount>& taccounts)
{
	std::cout << "\n===Accounts=====================================================" << std::endl;
	for (const auto& tacc : taccounts)
		std::cout << tacc << std::endl;
}

void deposit(std::vector<TrustAccount>& taccounts, double amount)
{
	std::cout << "\n===Depositing==============================" << std::endl;
	for (auto& tacc : taccounts) {
		if (tacc.deposit(amount))
			std::cout << "Deposited" << std::endl;
		else
			std::cout << "Failed" << std::endl;
	}
}

void withdraw(std::vector<TrustAccount>& taccounts, double amount)
{
	std::cout << "\n===Withdrawing==============================" << std::endl;
	for (auto& tacc : taccounts) {
		if (tacc.withdraw(amount))
			std::cout << "Withdrawed" << std::endl;
		else
			std::cout << "Failed" << std::endl;
	}
}


