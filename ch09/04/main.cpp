#include "namespace.h"
#include <iostream>

int main()
{
    using std::cout;
    using std::endl;
    using SALES::Sales;
    using SALES::setSales;
    using SALES::showSales;

    Sales s[2];
    double set_doubles[3] = {13.2, 16.9, 5.3}; 

    cout << "non-interactive version:" << endl;
    setSales(s[0], set_doubles, 3);
    showSales(s[0]);
    cout << endl;
    cout << "interactive version:" << endl;
    setSales(s[1]);
    showSales(s[1]);
}