#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Enter 1D Array size:\n> ";
    int n;
    cin >> n;
    int ar[n];
    cout<<"\n\nEnter Array:\n>\n";
    for(int i=0; i<n; i++)
    {
        cin>> ar[i];
    }
    cout<<"\n\nEntered Array:\n> ";
    for(int i=0; i<n; i++)
    {
        cout<< ar[i] <<" ";
    }

    cout <<"\n\nTo find the Cumulative of Prefix Sum we first define Prefix Array.";

    int pre[n];
    pre[0]=ar[0]; // initial index equal

    for(int i=1; i<n; i++) // NOTICE i=1
    {
        pre[i]=pre[i-1]+ar[i];// adding or cumulating with the current value of ar[]
    }
    cout<<"\n\nPrefix Array is:\n";
    for(int i=0; i<n; i++)
    {
        cout<< pre[i] <<" ";
    }

    cout<<"\n\n[ FINDING Prefix Sum ]\n\n";

    cout << "\n\nEnter the Number of Times (Query) of operation:\n> ";
    int q;
    cin>>q;
    int Left,Right,Sum,cnt=0; //defining operation variables
    while(q--)
    {
        cnt++;//count
        Sum=0;
        printf("\n\n[ Operation no. %d ]\n\n",cnt);
        cout<< "\nEnter Left Range(0,1,2,...):\n> ";
        cin >> Left;
        cout<< "\nEnter Right Range(0,1,2,...):\n> ";
        cin >> Right;
        if(Left==0)
        {
            Sum=pre[Right]; // otherwise will show garbage value for pre[Left-1]
        }
        else
        {
            Sum = pre[Right]-pre[Left-1];// without the target range on the left
        }
        cout<<"\n\nSum is " << Sum << "\n\n";

    }
    cout << "\n\n [ Operation Complete ] \n\n";


    return 0;

}
