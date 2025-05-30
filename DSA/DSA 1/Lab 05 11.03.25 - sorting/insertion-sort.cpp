#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter Array Size:\n\n";
    cin >> n;
    int a[n];
    cout << "\n\nInput:\n\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\n\nEntered Array:\n\n";
    for(int i = 0; i < n; i++)
    {
        cout << a[i]<< " ";
    }
    for(int i = 0; i < n; i++)
    {
        int key = a[i];
        int j = i-1;

        while(j>=0 && a[j]>key)
        {
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;

    }
    cout << "\n\nSorted Array:\n\n";
    for(int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << "\n\n";

    return 0;
}
