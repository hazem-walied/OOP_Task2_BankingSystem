#include<bits/stdc++.h>
#include "BankAccount.h"
using namespace std;


BankAccount::BankAccount()
{
    balance = 0;
}
BankAccount::BankAccount(double bal)
{
    balance = bal;
}
void BankAccount::set_account_id(string id)
{
    account_id = id;
}
void BankAccount::set_balance(double bal)
{
    balance = bal;
}
string BankAccount::get_account_id()
{
    return account_id;
}
double BankAccount::get_balance()
{
    return balance;
}
// withdraw function enables user to withdraw money if he have enough balance
// the function returns the amount the user want to withdraw if he can do so else it returns 0
// ht7tag l return da wenta bt3ml class l BankApplication-->(MAIN)
int BankAccount::withdraw(double amount)
{
    if(amount<=balance)
    {
        balance-= amount;
        return amount;
    }
    else
    {
        return 0;
    }
}
// L return ht7tago flmain bardo 3ashan lw da5al 7aga bl negative
int BankAccount::deposit(double amount)
{
    if(amount>=0)
    {
        balance+=amount;
        return amount;
    }
    else
    {
        return 0;
    }
}

