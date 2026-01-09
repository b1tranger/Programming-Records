#include <iostream>
using namespace std;

int main()
{
    int n=-1;
    cout << "Input numbers between 0 and 2:\n\n";

    while(n<0 && n>2)
    {
        cin >> n;

        if(n<=2 && n>=0)
        {
            cout << "\nOK\n"   ;
        }
        else
        {
            cout << "\nERROR\n";
        }
    }

    return 0;
}
