#include <iostream>
using namespace std;
 
template <class T>
T max5(T num[])
{
    T max = num[0];

    for(int i =1; i < 5; i++)
    {
        if(num[i] > max)
            max = num[i];
    }

    return max;
}

int main(int argc, char const *argv[])
{
    int num_int[5] = {65, 78, 95, 53, 65};
    float num_f[5] = {65.1, 78.2, 95.3, 53.4, 65.5};

    cout << "The biggest int is : " << max5(num_int) << endl;
    cout << "The biggest float is : " << max5(num_f) << endl;
    
    system("pause");
    return 0;
}