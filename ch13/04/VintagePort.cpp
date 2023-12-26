#include "vintageport.h"

VintagePort::VintagePort() : Port()
{
    nickname = NULL;
    year = 0;
}

VintagePort::VintagePort(const char *br, int b, const char *nn, 
                         int y) : Port(br, "Vintage", b)
{
    int len = strlen(nn) + 1;
    nickname = new char[len];
    strcpy(nickname, nn);

    year = y;
}

VintagePort::VintagePort(const VintagePort &vp) : Port(vp)
{
    int len = strlen(vp.nickname) + 1;
    nickname = new char[len];
    strcpy(nickname, vp.nickname);

    year = vp.year;
}

VintagePort & VintagePort::operator=(const VintagePort &vp)
{
    if(this == &vp)
        return *this;
    
    delete [] nickname;
    Port::operator=(vp);
    
    int len = strlen(vp.nickname) + 1;
    nickname = new char[len];
    strcpy(nickname, vp.nickname);
    year = vp.year;

    return *this;
}

void VintagePort::Show() const
{
    using std::cout;
    using std::endl;

    cout << "Nickname: " << nickname << endl;
    cout << "Year: " << year << endl;
    Port::Show();
}

ostream &operator<<(ostream &os, const VintagePort &vp)
{
    
    cout << (const Port &)vp << ", ";
    cout << vp.nickname << ", " << vp.year << endl;
    return os;
}