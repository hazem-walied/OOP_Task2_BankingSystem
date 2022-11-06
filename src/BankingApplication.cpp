#include <iostream>
#include "BankingApplication.h"
#include "Client.h"
#include "BankAccount.h"

using namespace std;

BankingApplication::BankingApplication()
{

}

void BankingApplication::run()
{
     int ans, choice, amount, return_val;
    double balancee;
    char id_num = '1';
    string name, address, phone,id, id_search;
    BankAccount *ptr;
    vector<BankAccount>data_acc;
    vector<Client>data;
    bool test = true;
    bool check = true;
    while(test == true)
    {
        cout << "Welcome to FCAI Banking Application" << endl;
        cout << "1. Create a New Account " << endl;
        cout << "2. List Clients and Accounts " << endl;
        cout << "3. Withdraw Money" << endl;
        cout << "4. Deposit Money " << endl;
        cout << "5. Close the application" << endl << endl;
        cout << "Please Enter Choice =========>";
        cin >> choice;
        if(choice == 1)
        {
            cout << "Please Enter Client Name =========>";
            getline(cin,name);
            getline(cin,name);
            cout << "Please Enter Client Address =======>";
            getline(cin,address);
            cout << "Please Enter Client Phone =======>";
            cin >> phone;
            cout << "What Type of Account Do You Like? (1) Basic (2) Saving - Type 1 or 2 =========>";
            cin >> ans;
            cout << "Please Enter the Starting Balance =========>";
            cin >> balancee;
            data_acc.push_back(BankAccount(balancee));
            ptr = &data_acc[data_acc.size()-1];
            id_num = data_acc.size() + 48;
            id = id + "FCAI-00"+id_num;
            ptr->set_account_id (id);
            data.push_back(Client(name, address, phone, ptr));
            cout << "An account was created with ID " << ptr->get_account_id() << " and Starting Balance " << ptr->get_balance() << " L.E. " << endl;
            id_num - id_num + 1;
            id.clear();
            cout << endl << "-------------------------------------------------------------------" << endl << endl;
        }
        else if(choice == 2)
        {
            for(int i = 0; i < data.size(); i++)
            {
                ptr = &data_acc[i];
                cout << "Name: " << data[i].get_name() << endl;
                cout << "Address: " << data[i].get_adress() << endl;
                cout << "Phone: " << data[i].get_phoneNumber() <<  endl;
                cout << "Account ID: " << ptr->get_account_id() << endl;
                cout << "Balance: " << ptr->get_balance() << endl << endl;
                cout << "-------------------------------------------------------------------" << endl << endl;
            }
        }
        else if(choice == 3)
        {
            check = true;
            cout << "Please Enter Account ID (e.g., FCAI-015) =========>";
            cin >> id_search;
            for(int i = 0; i < data_acc.size(); i++)
            {
                if(data_acc[i].get_account_id() == id_search)
                {
                    cout << "Account ID: " << data_acc[i].get_account_id() << endl;
                    cout << "Balance: " << data_acc[i].get_balance() << endl;
                    while (check == true)
                    {
                        cout << "Please Enter The Amount to Withdraw =========>";
                        cin >> amount;
                        return_val = data_acc[i].withdraw(amount);
                        if(return_val != 0)
                        {
                            cout << "Thank you." << endl;
                            cout << "Account ID: " << data_acc[i].get_account_id() << endl;
                            cout << "New Balance: " << data_acc[i].get_balance() << endl;
                            check = false;
                            cout << "-------------------------------------------------------------------" << endl << endl;
                        }
                        else
                        {
                            cout << "Sorry. This is more than what you can withdraw." << endl;
                        }
                    }
                }
            }
        }
        else if(choice == 4)
        {
            check = true;
            cout << "Please Enter Account ID (e.g., FCAI-015) =========>";
            cin >> id_search;
            for(int i = 0; i < data_acc.size(); i++)
            {
                if(data_acc[i].get_account_id() == id_search)
                {
                    cout << "Account ID: " << data_acc[i].get_account_id() << endl;
                    cout << "Balance: " << data_acc[i].get_balance() << endl;
                    while(check == true)
                    {
                        cout << "Please Enter The Amount to deposit =========>";
                        cin >> amount;
                        return_val = data_acc[i].deposit(amount);
                        if(return_val != 0)
                        {
                            cout << "Thank you." << endl;
                            cout << "Account ID: " << data_acc[i].get_account_id() << endl;
                            cout << "New Balance: " << data_acc[i].get_balance() << endl;
                            check = false;
                            cout << "-------------------------------------------------------------------" << endl << endl;
                        }
                        else
                        {
                            cout << "Sorry you can not deposit a negative number." << endl;
                        }
                    }
                }
            }
        }
        else if(choice == 5)
        {
            exit(0);
        }
        else
        {
            cout << "Invalid choice, please try again!" << endl;
            cout << "-------------------------------------------------------------------" << endl << endl;

        }
    }
}

BankingApplication::~BankingApplication()
{
    //dtor
}
