#include "classic.h"
Classic::Classic(const char *pwork, const char *s1, const char *s2, 
                 int n, double x) : Cd(s1, s2, n, x)
{
    int len = strlen(pwork) + 1;
    work = new char[len];
    strcpy(work, pwork);
}
    
Classic::Classic(const char *pwork, const Cd &d) : Cd(d)
{
    int len = strlen(pwork) + 1;
    work = new char[len];
    strcpy(work, pwork);
}
    
Classic::Classic() : Cd()
{
    work = NULL;
}

Classic::~Classic()
{
    delete [] work;
    //执行于此后会自动调用基类的析构函数
}

void Classic::Report() const
{
    using std::cout;
    using std::endl;
    
    cout << "Main Work: " << work << endl;
    Cd::Report();
}

Classic & Classic::operator=(const Classic &d)
{
    if(&d == this)
        return *this;

    delete [] work;

    Cd::operator=(d);  //在其中会delete [] performers和labels  0

    int len = strlen(d.work) + 1;
    work = new char[len];
    strcpy(work, d.work);

    return *this;
}