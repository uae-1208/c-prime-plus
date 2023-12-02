#include<iostream>
#include<cstring>
using namespace std;
 
struct stringy{
    char * str;
    int ct;
};

void set(stringy & bbb, const char * str)
{
    int length = strlen(str);

    bbb.str = new char [length + 1];
    strcpy(bbb.str, str);
    bbb.ct = length;
}

void show(const stringy & bbb, int num = 1)
{
    for(int i = 0; i < num; i++)
        cout << "The member str of the struct  is : " << bbb.str << endl;
}

void show(const char * str, int num = 1)
{
    for(int i = 0; i < num; i++)
        cout << "The string is : " << str << endl;
}

int main()
{
    stringy beany;
    char testing[] = "Reality isn't what it used to be.";

    set(beany, testing);// first argument is a reference
                        // allocates space to hold copy of testing;
                        // sets str member of beany to point to the
                        // new block, copies testing to new block,
                        // and sets ct member of beany
    show(beany);        // prints member string once
    show(beany, 2);     // prints member string twice
    testing[0] = 'D';
    testing[1] = 'u';
    show(testing);      // prints testing string once
    show(testing, 3);   // prints testing string thrice
    show("Done!");
 
    return 0;
}

