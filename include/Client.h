#ifndef CLIENT_H
#define CLIENT_H

#include"BankAccount.h"
using namespace std;

class Client{
private:
    string name;
    string adress;
    string phoneNumber;
    /// Pointer to BankAccount not a BankAccount BE CAREFULL (when you try to access functions of BankAccount in BankApplication class use -> )
    BankAccount * bankAcc;
    string accountType;
public:
    Client();
    Client(string n , string a , string pn , BankAccount * ptr);
    void set_name(string n);
    void set_adress(string a);
    void set_phoneNumber(string pn);
    void set_bankAcc(BankAccount * ptr);
    void set_accountType(string act);
    string get_name();
    string get_adress();
    string get_phoneNumber();
    BankAccount* get_bankAcc();
    string get_accountType();
};


#endif // CLIENT_H
