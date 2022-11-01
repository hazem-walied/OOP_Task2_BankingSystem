#include<bits/stdc++.h>
#include "SavingsBankAccount.h"

using namespace std;


SavingsBankAccount::SavingsBankAccount()
{
    minimumBalance = 1000;
}
SavingsBankAccount::SavingsBankAccount(double bal , double min_bal) : BankAccount(bal)
{
    if(bal>=min_bal)
    {
        minimumBalance = min_bal;
    }
    else
    {
        cout<<"SORRY Balance is below the minimum balance"<<endl;
    }
}
void SavingsBankAccount::set_minimumBalance(double min_bal)
{
    minimumBalance = min_bal;
}
double SavingsBankAccount::get_minimumBalance()
{
    return minimumBalance;
}
int SavingsBankAccount::withdraw(double amount)
{
    if((balance-amount)>=minimumBalance)
    {
        balance-=amount;
        return amount;
    }
    else
    {
        return 0;
    }
}
int SavingsBankAccount::deposit(double amount)
{
    if(amount>=100)
    {
        balance+=amount;
        return amount;
    }
    else
    {
        return 0;
    }
}
