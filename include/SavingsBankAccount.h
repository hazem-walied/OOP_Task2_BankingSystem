#ifndef SAVINGSBANKACCOUNT_H
#define SAVINGSBANKACCOUNT_H

#include"BankAccount.h"
using namespace std;


class  SavingsBankAccount : public BankAccount{
private:
    double minimumBalance;
public:
    SavingsBankAccount();
    SavingsBankAccount(double bal , double min_bal);
    void set_minimumBalance(double min_bal);
    double get_minimumBalance();
    int withdraw(double amount);
    int deposit(double amount);
};

#endif // SAVINGSBANKACCOUNT_H
