#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include<bits/stdc++.h>
using namespace std;

class BankAccount{
protected:
    string account_id = "No ID";
    double balance;
public:
    BankAccount();
    BankAccount(double bal);
    void set_account_id(string id);
    void set_balance(double bal);
    string get_account_id();
    double get_balance();
    int withdraw(double amount);
    int deposit(double amount);

};

#endif // BANKACCOUNT_H
