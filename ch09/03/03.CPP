#include <iostream>
#include <cstring>

double buff[100];
struct chaff
{
    char dross[20];
    int slag;
};

int main()
{
    using std::cout;
    using std::endl;
    chaff *p = new (buff) chaff[2];

    p[0].slag = 10;
    strcpy(p[0].dross, "Mike");
    p[1].slag = 73; 
    strcpy(p[1].dross, "Xavier");

    cout << "The address of the buff :" << (int*)buff << endl;
    cout << "The address of the p[0] :" << (int*)p << endl;
    cout << "The address of the p[1] :" << (int*)(p + 1) << endl;

    delete[] p;
}