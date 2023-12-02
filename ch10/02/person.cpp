#include "person.h"

Person::Person(const string &ln, const string &fn)
{
    lname = ln;
    fname = fn;
}

Person::~Person()
{
    using std::cout;
    using std::endl;
    cout << "Bye, " << fname << " " << lname << "!" << endl;

}
 
void Person::Show() const
{
    using std::cout;
    using std::endl;
    cout << "The name is : " << fname << " " << lname << "!" << endl;

}

void Person::FormalShow() const
{
    using std::cout;
    using std::endl;
    cout << "The name is : " << lname << " " << fname << "!" << endl;
}

