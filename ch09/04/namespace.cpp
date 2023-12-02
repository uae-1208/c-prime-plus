#include "namespace.h"
#include <iostream>

//get average:
namespace SALES
{  
    static void get_average(Sales &s)
    {
        double sum = 0;

        for(int i=0; i<QUARTERS; i++)
            sum += s.sales[i];
        
        s.average = sum / QUARTERS;
    }
}
//get max:
namespace SALES
{
    static void get_max(Sales &s)
    {
        double max = s.sales[0];

        for(int i=1; i<QUARTERS; i++)
            if(max < s.sales[i])
                max = s.sales[i];
        
        s.max = max;
    }
}
//get min:
namespace SALES
{
    static void get_min(Sales &s)
    {
        double min = s.sales[0];

        for(int i=1; i<QUARTERS; i++)
            if(min > s.sales[i])
                min = s.sales[i];
        
        s.min = min;
    }
}


//non-interactive version:
namespace SALES
{
    void setSales(Sales &s, const double ar[], int n)
    {
        int less = QUARTERS;
        if(less > n)
            less = n;

        for(int i=0; i<less; i++)
            s.sales[i] = ar[i];

        get_average(s);
        get_max(s);
        get_min(s);
    }
}


//interactive version:
namespace SALES
{   
    using std::cin;
    using std::cout;
    using std::endl;

    void setSales(Sales &s)
    {
        double ar[QUARTERS] = {};

        cout << "Enter 4 float numbers:" << endl;
        for(int i=0; i<QUARTERS; i++)
        {
            cout << "    #" << (i+1) <<  ": ";
            cin >> s.sales[i];
        }

        get_average(s);
        get_max(s);
        get_min(s);
    }
}


//display the SALES struct s:
namespace SALES
{   
    void showSales(const Sales &s)
    {
        cout << "Below are 4 float numbers:" << endl;
        for(int i=0; i<QUARTERS; i++)
            cout << "    #" << (i+1) <<  ": " << s.sales[i];

        cout << endl << "    average: " << s.average;
        cout << endl << "    max: " << s.max;
        cout << endl << "    min: " << s.min;
        cout << endl;
    }
}