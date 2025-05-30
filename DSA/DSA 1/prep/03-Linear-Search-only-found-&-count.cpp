#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Enter Array Size:\n> ";
    int n;
    cin >> n;
    int ar[n];
    cout<<"\n\nEnter Array:\n> ";
    for(int i = 0 ; i <n; i++)
    {
        cin >> ar[i];
    }
    cout << "\n\n";
    for(int i = 0 ; i <n; i++)
    {
        cout << ar[i] <<" ";
    }
    cout << "\n\n";
    cout << "searching?\n> ";
    int t,cnt=0;
    bool flag = false, found=false;
    cin >> t;
    for(int i = 0; i < n; i++)
    {
//        if(flag==false){}
        if(ar[i]==t)
        {
            cout<<"\nFOUND TARGET\n\nindex (0,1,2,...) = "<< i <<"\n\n";
            flag = true;
            cnt++;
        }
        else
        {
//            flag = false;
        }
    }
    if(flag==true)
    {
        cout<< "\n\nTARGET was FOUND";
    }
    else
    {
        cout<<"\n\nTARGET was NOT FOUND";
    }

    cout << "\n\nFound times = "<<cnt <<endl;
    return 0;

}
