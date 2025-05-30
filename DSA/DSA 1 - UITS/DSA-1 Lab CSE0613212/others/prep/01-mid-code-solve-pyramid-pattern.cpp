#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k = 8;
    for(int i=0; i<5; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout<<k<<" ";
            if(k==0)
            {
                k=9;
                continue;
            }
            k--;
        }
        cout<<endl;
    }


    return 0;

}
