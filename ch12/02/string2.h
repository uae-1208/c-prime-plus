#ifndef STRING2_H_
#define STRING2_H_

#include <iostream>
using std::istream;
using std::ostream;

class String
{
private:
    char *str;                    //字符串首字符指针;
    int len;                      //记录字符串长度;
    static int num_strings;       //记录构造的字符串数目;
    static const int CINLIM = 80; //限制输入字符个数;

public: 
    String(const char *s);            //显式构造函数
    String();                         //默认构造函数
    String(const String &st);         //复制构造函数
    ~String();
    int length() const { return len; }

    //其它功能成员函数
    void StringLow();
    void StringUp();
    int has(const char &ch);

    //成员函数重载运算符
    String &operator=(const String &st);  //重载赋值运算符
    String &operator=(const char *s);
    char &operator[](int i);

    //友元函数重载运算符
    const char &operator[](int i) const;
    friend bool operator<(const String &st1, const String &st2);
    friend bool operator>(const String &st1, const String &st2);
    friend bool operator==(const String &st1, const String &st2);
    friend String operator+(const String &st1, const String &st2);
    friend String operator+(const char * &pc, const String &st);
    friend String operator+(const String &st, const char * &pc);
    friend ostream &operator<<(ostream &os, const String &st);
    friend istream &operator>>(istream &is, String &st);

    static int HowMany();
};

#endif

