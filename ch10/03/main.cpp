#include "golf.h"

int main()
{
    using std::cout;
    using std::endl;    

    {
        golf uae;    
        uae.showgolf();
        cout << endl;

        uae.setgolf("eau", 10086);
        uae.showgolf();
        cout << endl;
    }
}