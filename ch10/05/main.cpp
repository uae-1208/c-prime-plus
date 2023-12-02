#include "stack.h"

int main()
{
    using std::cout;
    using std::endl;    

    customer temp1,temp2;
    {
        Stack uae;    
        temp1 = {"abc", 107.25};
        uae.push(temp1);
        cout << endl;

        temp1 = {"def", 91.75};
        uae.push(temp1);
        cout << endl;

        uae.pop(temp2);
        cout << endl;

        uae.pop(temp2);
        cout << endl;
    }
}