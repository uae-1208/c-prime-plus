#include "port.h"

Port::Port(const char *br, const char *st, int b)
{
    int len = strlen(br) + 1;
    brand = new char[len];
    strcpy(brand, br);

    len = strlen(st) + 1;
    style = new char[len];
    strcpy(style, st);

    bottles = b;
}

//复制构造函数
Port::Port(const Port &p)
{
    int len = strlen(p.brand + 1);
    brand = new char[len];
    strcpy(brand, p.brand);

    len = strlen(p.style) + 1;
    style = new char[len];
    strcpy(style, p.style);

    bottles = p.bottles;
}


//赋值运算符
Port & Port::operator=(const Port &p)
{
    if(this == &p)
        return *this;
    
    delete [] brand;
    delete [] style;
    
    int len = strlen(p.brand + 1);
    brand = new char[len];
    strcpy(brand, p.brand);

    len = strlen(p.style) + 1;
    style = new char[len];
    strcpy(style, p.style);

    bottles = p.bottles;
    
    return *this;
}

Port & Port::operator+=(int b)
{
    bottles += b;
    return *this;
}

Port & Port::operator-=(int b)
{
    if(bottles >= b)
        bottles -= b;
    else
        bottles = 0;

    return *this;
}

void Port::Show() const
{
    using std::cout;
    using std::endl;

    cout << "Brand: " << brand << endl;
    cout << "Kind: " << style << endl;
    cout << "Bottles: " << bottles << endl;
}

ostream & operator<<(ostream &os, const Port &p)
{
    cout << p.brand << ", " << p.style << ", " << p.bottles;
    return os;
}