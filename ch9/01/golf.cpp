#include "golf.h"
#include<iostream>
#include<cstring>

using std::cin;
using std::cout;
using std::endl;


//non-interactive version:
void setgolf(golf &g, const char *name, int hc)
{
    strcpy(g.fullname, name);
    g.handicap = hc;
}

//interactive version:
int setgolf(golf &g)
{
    cout << "Enter the name(enter nothing to quit):" << endl;
    cin.getline(g.fullname, Len);

    if(0 != strcmp(g.fullname, "\0"))
    {
        cout << "Enter the handicap:" << endl;
        cin >> g.handicap;
        return 1;
    }
    else
        return 0;
}

void handicap(golf &g, int hc)
{
    g.handicap = hc;
}

void showgolf(const golf &g)
{
    cout << "The name:" << g.fullname <<endl;
    cout << "The handicap:" << g.handicap <<endl;
}