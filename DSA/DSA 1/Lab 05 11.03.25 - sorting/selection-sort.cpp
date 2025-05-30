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
    cout << "\n\n";
    for(int i = 0; i < n-1 ; i++)
    {
        int minIdx = i;
        for(int j=i+1; j<n; j++)
        {
            if(a[j]<a[minIdx])
            {
                minIdx = j;
            }

        }swap(a[i],a[minIdx]);

    }
    cout << "\n\nSorted Array:\n\n";
    for(int i = 0; i < n; i++)
    {
        cout << a[i]<< " ";
    }



    return 0;
}
