#include "stack.h"

Stack::Stack()
{
    front = NULL;
    rear = NULL;
    size = 0;
}

Stack::Stack(const Stack &st)
{
    Item * temp = front;
    Item * temp_st = st.front;
    
    size = st.size;
    for(int i = 0; i < st.size; i++)
    {
        temp = new Item[1];
        temp->elem = temp_st->elem;
        temp->next = NULL;
        temp_st = temp_st->next;

        if(i == 0)
            front = rear = temp;
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
}

Stack::~Stack()
{
    Item * temp;

    while(front != NULL)
    {
        temp = front;
        front = front->next;
        delete [] temp;
    }

}

bool Stack::isempty() const
{
    return (size == 0);
}

bool Stack::isfull() const
{
    return (size == MAX);
}

void Stack::push(const ElemType &e)
{
    Item * temp = new Item[1];

    size ++;
    temp->elem = e;
    temp->next = NULL;
    if(size == 1)       //入栈了第一个元素
        front = rear = temp;
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

//只有栈中有元素才可以调用
void Stack::pop(ElemType &e)    
{
    Item * temp = front;

    if(front == rear)    //栈中只有1个元素
        front = temp = NULL;
    else                 //栈中元素个数＞1
        while(temp->next != rear)
            temp = temp->next;
    size--;
    e = rear->elem;
    delete [] rear;
    rear = temp;
}

Stack & Stack::operator=(const Stack &st)
{   
    Item * temp = front;
    Item * temp_st = st.front;
    
    if(this == &st)
        return *this;

    size = st.size;
    for(int i = 0; i < st.size; i++)
    {
        temp = new Item[1];
        temp->elem = temp_st->elem;
        temp->next = NULL;
        temp_st = temp_st->next;

        if(i == 0)
            front = rear = temp;
        else
        {
            rear->next = temp;
            rear = temp;
        }
    }
    return *this;
}