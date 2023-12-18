#ifndef STACK_H_
#define STACK_H_
#include <iostream>

typedef unsigned long ElemType;

struct node{
    ElemType elem;
    struct node * next;   
};

typedef struct node Item;

class Stack
{
private:
    enum {MAX = 10};
    Item *front;     //首指针
    Item *rear;      //尾指针
    int size;        //记录栈中元素的个数

public:
    Stack();
    Stack(const Stack &st);                  //复制构造函数
    ~Stack();
    bool isempty() const;
    bool isfull() const;
    void push(const ElemType &e);
    void pop(ElemType &e);
    Stack &operator=(const Stack &st);       //重载赋值运算符
};

#endif
