#include "bank.h"

int main()
{
    using std::cout;
    using std::endl;

    {
        BankAccount MyAccount("uae", "eau");
        MyAccount.ShowAccount();

        cout << endl;

        MyAccount.deposit(-5);
        MyAccount.withdraw(-5);
        MyAccount.withdraw(5);
        cout << endl;

        MyAccount.deposit(985);
        MyAccount.ShowAccount();
        cout << endl;

        MyAccount.withdraw(211);
        MyAccount.ShowAccount();
        cout << endl;
    }
}