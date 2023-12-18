#include "stack.h"

int main()
{
    using namespace std;
    
    Stack st; // create an empty stack
    char ch;
    unsigned long po;

    for(int i = 0; i < 10; i++)
    {
        po = i*2;
        st.push(po);
    }
    Stack copy = st;
    Stack equal1, equal2;
    equal1 = equal2 = st;
    for(int i = 0; i < 10; i++)
    {
        //copy.pop(po);
        //equal1.pop(po);
        equal2.pop(po);
        cout <<"po #" << po << " popped.\n";
    }

    /*cout << "please enter A to add a purchase order,\n"
         << "p to process a PO, or Q to quit.\n";
    
    while (cin >> ch && toupper(ch) != 'Q')
    {
        while (cin.get() != '\n')
            continue;
        if (!isalpha(ch))
        {
            cout <<'\a';
            continue;
        }
        switch(ch)
        {
            case 'A':
            case 'a':   if (st.isfull())
                            cout << "stack already full\n";
                        else
                        {
                            cout << "Enter a PO number to add:";
                            cin >> po;
                            st.push(po);
                        }
                       
                        break;
            case 'P':
            case 'p':   if(st.isempty())
                            cout <<"stack already empty\n";
                        else
                        {
                            st.pop(po);
                            cout <<"po #" << po << " popped\n";
                        }
                        break;
        }
        cout << "Please enter A to add a purchase order,\n"
             << "p to proces a PO, or Q to quit.\n";
    }*/

    cout <<"Bye!\n";
    return 0;
}