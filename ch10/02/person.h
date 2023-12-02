#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using std::string;

class Person
{
private:
    string lname;
    string fname;

public:
    Person()   //默认构造函数
    {
        lname = "";
        fname = "";
    }
    Person(const string &ln, const string &fn = "Heyyou"); 
    ~Person();
    void Show() const;
    void FormalShow() const;
};

#endif