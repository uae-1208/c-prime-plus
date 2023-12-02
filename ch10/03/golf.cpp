#include "golf.h"
golf::golf(const string name, int hc)
{
    fullname = name;
    handicap = hc;
}

golf::~golf()
{
    using std::cout;
    using std::endl;
    cout << "Bye, " << fullname <<  "!" << endl;
}

void golf::setgolf(const string name, int hc)
{
    golf temp(name, hc);
    *this = temp;
}

void golf::showgolf() const
{
    using std::cout;
    using std::endl;
    cout << "Hello, " << fullname << "!" << endl;
    cout << "Your handicap is : " << handicap <<  "." << endl;
}