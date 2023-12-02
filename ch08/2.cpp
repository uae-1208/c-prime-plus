#include <iostream>
#include <cstring>
using namespace std;
 
struct CandyBar{
    char* band;
    float weight;
    int calorie;
};
 

void SetCandyBar(CandyBar & candybar, char*  band   =  (char*)"Millennium Munch", 
                                      float weight  =  2.85, 
                                      int   calorie =  350  )
{
    candybar.band =  band;
    candybar.weight = weight;
    candybar.calorie = calorie;
}


void PrintCandyBar(const CandyBar & candybar)
{
    cout << "The band of the candy bar is :" << candybar.band << endl;   
    cout << "The weight of the candy bar is :" << candybar.weight << endl;   
    cout << "The calorie of the candy bar is :" << candybar.calorie << endl;   
}


int main(int argc, char const *argv[])
{
    CandyBar c1, c2;

    SetCandyBar(c1, (char*)"ABC", 7.96, 586);
    SetCandyBar(c2);
    
    PrintCandyBar(c1);
    PrintCandyBar(c2);
    
    system("pause");
    return 0;
}