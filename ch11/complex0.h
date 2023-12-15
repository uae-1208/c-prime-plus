#ifndef COMPLEX0_H_
#define COMPLEX0_H_

#include <iostream>

class complex0
{
private:
    double real;
    double img;
public:
    complex0(double r = 0, double i = 0);
    ~complex0();
    complex0 operator+(const complex0 & c) const;
    complex0 operator-(const complex0 & c) const;
    complex0 operator*(const complex0 & c) const;
    complex0 operator*(const double & x) const;
    complex0 operator~() const;

    //友元函数
    friend complex0 operator*(const double & x, const complex0 & c);
    friend std::ostream & operator<<(std::ostream & os, const complex0 & c);
    friend std::istream & operator>>(std::istream & os, complex0 & c);
};

complex0::complex0(double r, double i)
{
    real = r;
    img = i;
}

complex0::~complex0()
{
}

complex0 complex0::operator+(const complex0 & c) const
{
    complex0 result;
    result.real = real + c.real;
    result.img = img + c.img;

    return result;
}

complex0 complex0::operator-(const complex0 & c) const
{
    complex0 result;
    result.real = real - c.real;
    result.img = img - c.img;

    return result;
}

complex0 complex0::operator*(const complex0 & c) const
{
    complex0 result;
    result.real = real*c.real - img*c.img;
    result.img = real*c.img - img*c.real;

    return result;
}

complex0 complex0::operator*(const double & x) const
{
    complex0 result;
    result.real = x * real;
    result.img = x * img;

    return result;
}

complex0 operator*(const double & x, const complex0 & c)
{
    complex0 result;
    result.real = x * c.real;
    result.img = x * c.img;

    return result;
}

complex0 complex0::operator~() const
{
    complex0 result;
    result.real = real;
    result.img = -img;

    return result;    
}

std::ostream & operator<<(std::ostream & os, const complex0 & c)
{
    os << "(" << c.real <<  "," << c.img << "i)" << std::endl;
    return os;
}

std::istream & operator>>(std::istream & is, complex0 & c)
{
    std::cout << "real: ";
    if(is >> c.real)
    {
        std::cout << "imaginary: ";
        is >> c.img;
    }
    

    return is;
}


#endif
