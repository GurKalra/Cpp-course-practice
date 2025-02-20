#pragma once
#include "Account.h"
#include "SavingsAccount.h"
#include "CheckingAccount.h"
#include "TrustAccount.h"
#include <vector>

void display(const std::vector<Account>& accounts);
void deposit(std::vector<Account>& accounts, double amount);
void withdraw(std::vector<Account>& accounts, double amount);


void display(const std::vector<SavingsAccount>& saccounts);
void deposit(std::vector<SavingsAccount>& saccounts, double amount);
void withdraw(std::vector<SavingsAccount>& saccounts, double amount);


void display(const std::vector<CheckingAccount>& caccounts);
void deposit(std::vector<CheckingAccount>& caccounts, double amount);
void withdraw(std::vector<CheckingAccount>& caccounts, double amount);


void display(const std::vector<TrustAccount>& taccounts);
void deposit(std::vector<TrustAccount>& taccounts, double amount);
void withdraw(std::vector<TrustAccount>& taccounts, double amount);