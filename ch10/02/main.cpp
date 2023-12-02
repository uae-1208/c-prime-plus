#include "person.h"

int main()
{
    using std::cout;
    using std::endl;

    {
        Person one;
        Person Two("Smthecraft");
        Person Three("Dimwiddy", "Sam");

        one.Show();
        one.FormalShow();
        cout << endl;

        Two.Show();
        Two.FormalShow();
        cout << endl;

        Three.Show();
        Three.FormalShow();
        cout << endl;
    }
}