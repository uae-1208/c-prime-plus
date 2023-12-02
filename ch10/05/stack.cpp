#include "stack.h"

Stack::Stack()
{
    total = 0;
    top = 0;
}

bool Stack::isempty() const
{
    return 0 == top;
}

bool Stack::isfull() const
{
    return MAX == top;
}

bool Stack::push(const Item &item)
{
    using std::cout;
    using std::endl;
    
    if (top < MAX)
    {
        items[top++] = item;
        cout << item.fullname << " added." << endl;
        return true;
    }
    else
    {
        return false;
    }
}

bool Stack::pop(Item &item)
{
    using std::cout;
    using std::endl;

    if (top > 0)
    {
        item = items[--top];
        total += item.payment;
        cout << item.fullname << " deleted." << endl;
        cout << "Now the total payment is " << total << endl;
        return true;
    }
    else
    {
        return false;
    }
}