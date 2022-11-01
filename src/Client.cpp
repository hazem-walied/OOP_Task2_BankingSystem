#include<bits/stdc++.h>
#include "Client.h"
#include"BankAccount.h"
using namespace std;



Client::Client()
{

}
Client::Client(string n , string a , string pn , BankAccount * ptr)
{
    name = n;
    adress = a;
    phoneNumber = pn;
    bankAcc = ptr;
}
void Client::set_name(string n)
{
    name = n;
}
void Client::set_adress(string a)
{
    adress = a;
}
void Client::set_phoneNumber(string pn)
{
    phoneNumber = pn;
}
void Client::set_bankAcc(BankAccount * ptr)
{
    bankAcc = ptr;
}
void Client::set_accountType(string act)
{
    accountType = act;
}
string Client::get_name()
{
    return name;
}
string Client::get_adress()
{
    return adress;
}
string Client::get_phoneNumber()
{
    return phoneNumber;
}
BankAccount* Client::get_bankAcc()
{
    return bankAcc;
}
string Client::get_accountType()
{
    return accountType;
}

