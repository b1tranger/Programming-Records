#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\n\n---------------------------------------------\n";
    int n;
    cout << "Enter Array Size:\n\n";
    cin >> n;
    cout << "\n\n---------------------------------------------\n";
    int a[n];
    cout << "\n\nInput:\n\n";
    for(int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << "\n\n---------------------------------------------\n";
    cout << "Entered Array:\n\n";
    for(int i = 0; i < n; i++)
    {
        cout << a[i]<< " ";
    }

    for(int i = 0; i < n-1 ; i++)
    {
        for(int j=0; j < n - i - 1; j++)
        {
            if(a[j]>a[j+1])
            {
                swap(a[j],a[j+1]);
            }
        }

    }
    cout << "\n\n---------------------------------------------\n";
    cout << "Sorted Array:\n\n";
    for(int i = 0; i < n; i++)
    {
        cout << a[i]<< " ";
    }
    cout << "\n\n---------------------------------------------\n";


    return 0;
}
