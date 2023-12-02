#include <iostream>
#include <cstring>
using namespace std;
 
template <class T>
T maxn(T num[], int n)
{
    T max = num[0];

    for(int i =1; i < n; i++)
    {
        if(num[i] > max)
            max = num[i];
    }

    return max;
}

template <> char* maxn(char * ps[], int n)
{
    int max_len = strlen(ps[0]);
    int number = 0;

    for(int i =1; i < n; i++)
    {
        if(strlen(ps[i]) > max_len)
            max_len = strlen(ps[i]);
            number = i;
    }

    return ps[number];
}


int main(int argc, char const *argv[])
{
    int num_int[6] = {65, 78, 95, 53, 65, 108};
    float num_f[5] = {65.1, 78.2, 95.3, 53.4};
    const char * ps[5] =  {
                        "abcdef7",
                        "abcdefgh9",
                        "abcdefghijk13",
                        "abcdefghijkhi15"
                    };

    cout << "The biggest int is : " << maxn(num_int, 6) << endl;
    //cout << "The biggest int is : " << maxn(num_int, 5) << endl;
    cout << "The biggest float is : " << maxn(num_f, 5) << endl;
    cout << "The longest string is : " << maxn(ps, 5) << endl;
    
    system("pause");
    return 0;
}