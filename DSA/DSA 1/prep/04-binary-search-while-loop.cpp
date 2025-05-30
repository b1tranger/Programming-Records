#include <bits/stdc++.h>
using namespace std;

int binarysearch(int ar[],int t, int s)
{
    int L = 0; // setting Leftmost position
    int R = s-1; // setting Rightmost position
    int mid, found = -1, position = 0;
    while(L<=R)
    {

        mid = (L+R)/2;

        if(ar[mid]==t)
        {
//            found=1;
            return mid;

        }
        else if(t>ar[mid])
        {
            L=mid+1;
        }
        else  //t<ar[mid]
        {
            R=mid-1;
        }

    }
    return -1;
}


int binarysearch2(int ar[],int t, int s)
{
    int L = 0; // setting Leftmost position
    int R = s-1; // setting Rightmost position
    int mid, found = -1, position = 0;
    while(L<=R)
    {

        mid = (L+R)/2;

        if(ar[mid]==t)
        {
//            found=1;
            return mid;

        }
        else if(t<ar[mid])
        {
            L=mid+1;
        }
        else  //t>ar[mid]
        {
            R=mid-1;
        }

    }
    return -1;
}

int main()
{
    cout << "Enter Array Size:\n> ";
    int n;
    cin >> n;
    int ar[n];
    cout<<"\n\nEnter Array:\n>\n";
    for(int i = 0 ; i <n; i++)
    {
        cin >> ar[i];
    }
    cout << "\n\nArray Entered is:\n";
    for(int i = 0 ; i <n; i++)
    {
        cout << ar[i] <<" ";
    }
    cout << "\n\nusing SORT FUNCTION";
    cout<<"\n\nSORTED ascending:\n\n";
    sort(ar,ar+n);
    for(int i = 0 ; i <n; i++)
    {
        cout << ar[i] <<" ";
    }

    cout<<"\n\nBinary Search for ascending order:\n\n";
    cout << "\n\nInput TARGET element:\n> ";
    int t;
    cin >> t;

    int s = sizeof(ar)/sizeof(ar[0]);
    int result = binarysearch(ar,t,s);

    cout << "\n\nMid Position is " << result+1;


    cout<<"\n\nSORTED descending:\n\n";
    sort(ar,ar+n,greater<int>());
    for(int i = 0 ; i <n; i++)
    {
        cout << ar[i] <<" ";
    }

    cout<<"\n\nBinary Search for descending order:\n\n";
    cout << "\n\nInput TARGET element:\n> ";
//    int t;
    cin >> t;

//    int s = sizeof(ar)/sizeof(ar[0]);
//    int result = binarysearch2(ar,t,s);
    result = binarysearch2(ar,t,s);
    cout << "\n\nMid Position is " << result+1;

    cout <<"\n\n";
    return 0;

}
