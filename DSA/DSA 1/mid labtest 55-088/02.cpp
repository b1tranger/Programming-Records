#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\n\n[ CREATING Selection Sort Algorithm ]\n\n";
    cout << "Enter Size of the Array:\n> ";
    int n=0;
    cin >> n;

    int arr[n];
    cout <<"\n\nEnter values to the Array:\n>\n";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
    cout <<"\n\nEntered Array:\n";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\n\n[ Attempting Selection Sort ]\n\n";

    for(int i = 1; i<n; i++)
    {
        int minIdx = i;
        int j = i-1;
//        for(j>=0;arr[j]>arr[minIdx]; j--){
//            continue;
//            j--;
//        }
        while(j>=0 && arr[j]>arr[minIdx])
        {
            arr[j+1]=arr[i+1];
            j--;
        }
        swap(arr[j],arr[minIdx]);
        for(int i=0; i<n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    cout << "\n\nFinal sorted array:  ";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n\n\n";


    return 0;
}
