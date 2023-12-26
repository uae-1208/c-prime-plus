#include "cd.h"
Cd::Cd(const char *s1, const char *s2, int n, double x)
{
    int len = strlen(s1) + 1;
    performers = new char[len];
    strcpy(performers, s1);

    len = strlen(s2) + 1;
    labels = new char[len];
    strcpy(labels, s2);

    selections = n;
    playtime = x;
}

//复制构造函数
Cd::Cd(const Cd &d)
{
    int len = strlen(d.performers) + 1;
    performers = new char[len];
    strcpy(performers, d.performers);

    len = strlen(d.labels) + 1;
    labels = new char[len];
    strcpy(labels, d.labels);

    selections = d.selections;
    playtime = d.playtime;
}

Cd::Cd()
{
    performers = NULL;
    labels = NULL;
    selections = 0;
    playtime = 0;
}

Cd::~Cd()
{
    delete [] performers;
    delete [] labels;
}

void Cd::Report() const
{
    using std::cout;
    using std::endl;

    cout << "Performers: " << performers << endl;
    cout << "Label: " << labels << endl;
    cout << "Selection: " << selections << endl;
    cout << "Playtime: " << playtime << endl;
    cout << endl;
}

Cd & Cd::operator=(const Cd & d)
{
    if(&d == this)
        return *this;

    delete [] performers;
    delete [] labels;

    int len = strlen(d.performers) + 1;
    performers = new char[len];
    strcpy(performers, d.performers);

    len = strlen(d.labels) + 1;
    labels = new char[len];
    strcpy(labels, d.labels);

    selections = d.selections;
    playtime = d.playtime;

    return *this;
}