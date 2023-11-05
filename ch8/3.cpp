#include <iostream>
#include <cstring>
using namespace std;
 
void PrintUpper( string & s)
{
    int n = s.size();
    for(int i = 0; i < n; i++)
        s[i] = toupper(s[i]);
    cout << s << endl;
}

int main(int argc, char const *argv[])
{
    string s;
    
    cout << "Enter a string(q to quit): ";
    while(getline(cin, s) && (s != "q"))
    {
        PrintUpper(s);
        cout << "Enter a string(q to quit): ";
    }

    system("pause");
    return 0;
}