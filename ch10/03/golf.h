#ifndef BANK_H_
#define BANK_H_

#include <iostream>
using std::string;

class golf
{
private:
    string fullname;
    int handicap;
public:
    golf(const string name = "", int hc = 0);
    ~golf();
    void setgolf(const string name, int hc);
    void showgolf() const;
};



#endif
