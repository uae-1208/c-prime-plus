#ifndef CLASSIC_H_
#define CLASSIC_H_

#include "cd.h"

class Classic : public Cd
{
private:
    char *work;

public:
    Classic(const char *pwork, const char *s1, const char *s2, int n, double x);
    Classic(const char *pwork, const Cd &d);
    Classic();
    virtual ~Classic();
    virtual void Report() const;
    Classic &operator=(const Classic &d);
};

#endif
