#include "bank.h"

BankAccount::BankAccount(const string & n, const string & a, const int & m)
{
    name = n;
    account = a;
    money = m;
}

BankAccount::~BankAccount()
{
    using std::cout;
    using std::endl;
    cout << "Bye, " << name <<  "!" << endl;
}

void BankAccount::ShowAccount() const
{
    using std::cout;
    using std::endl;
    cout << "Hello, " << name << "!" << endl;
    cout << "Your account is : " << account <<  "." << endl;
    cout << "You get $" << money << " left!" << endl;
}

void BankAccount::deposit(const int & m) 
{
    using std::cout;
    using std::endl;

    if(m > 0)
    {
        money += m;
        cout << "You just deposited $" << m << "!" << endl;
    }
    else
        cout << "You must deposit positive money!" <<endl;
}

void BankAccount::withdraw(const int & m) 
{
    using std::cout;
    using std::endl;

    if(m <= 0)
    {
        cout << "You must withdraw positive money!" <<endl;
    }
    else if(money - m >= 0)
    {
        money -= m;
        cout << "You just withdrawed $" << m << "!" << endl;
    }
    else
        cout << "Your money is not enough!" <<endl;
}