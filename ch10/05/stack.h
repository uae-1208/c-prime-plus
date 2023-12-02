#ifndef STACK_H_
#define STACK_H_

#include <iostream>
using std::string;

struct customer{
    string fullname;
    double payment;
};
typedef customer Item;

class Stack
{
private:
    enum {MAX = 10};
    Item items[MAX];
    double total;
    int top;

public:
    Stack();
    bool isempty() const;
    bool isfull() const;
    bool push(const Item &item);
    bool pop(Item &item);
};


#endif
