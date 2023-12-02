#ifndef BANK_H_
#define BANK_H_

#include <iostream>
using std::string;

class BankAccount
{
private:
    string name;
    string account;
    int money;
public:
    BankAccount(const string & n = "", const string & a = "", const int & m = 0);
    ~BankAccount();
    void ShowAccount() const;
    void deposit(const int & m);
    void withdraw(const int & m);
};


#endif
