#include <bits/stdc++.h>
using namespace std;

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
    cout << "\n\n";
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

    cout << "\n\nInput TARGET element:\n> ";
    int t;
    cin >> t;


    cout<<"\n\nBinary Search for ascending order:\n\n";
    int L = 0; // setting Leftmost position
    int R = n; // setting Rightmost position
    int mid, found = -1, position = -1;
    for(int i = L; i<=R-1; i++)
    {
        mid = (R+L)/2;
        cout << "(tmp) mid is "<<mid <<endl;
        if(ar[mid]==t)
        {
            found = 1;
//            position = i+1;
            //break;
            cout << "Found "<<mid <<endl;
        }
        else if(t > ar[mid])
        {
            mid = L+1; //selecting chunk to the right of mid position
        }
        else if(t < ar[mid])
        {
            mid = R-1; //selecting chunk to the left of mid position
        }
    }
//    if(found ==1)
//    {
//        cout << "\n\nTARGET found at " << position << "no. index";
//    }
//    else
//    {
//        cout << "\n\nTARGET not found";
//    }

//    cout<<"\n\nSORTED descending:\n\n";
//    sort(ar,ar+n,greater<int>());
//    for(int i = 0 ; i <n; i++)
//    {
//        cout << ar[i] <<" ";
//    }




    return 0;

}
