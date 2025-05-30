#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "Test Cases?\n";
    int t; // test cases
    cin >> t;
    int x;
    int flag = 0;
    for(int i = 0; i<t; i++)
    {
        int n;
        cout << "Array Size?\n" ;
        cin >> n;
        int A[n];
        cout << "Input array of size " << n << endl;
        for(int j = 0; j<n; j++ )
        {
            cin >> A[j];

        }
        cout << "Target sum for Checking?\n";
        cin >> x;
        for(int j = 0; j < n; j++ )
        {
            for(int k = j+1; k < n; k++ )
            {
                if(x == A[j]+A[k])
                {
                    flag = 1;

                }

            }

        }
        if(flag)
        {
            cout << "Target Found" << endl;
        }
        else
        {
            cout << "Target Not Found" << endl;
        }

        if(i != t-1)
        {
            cout << "\n\nNext ";
        }
        flag = 0;
    }

    return 0;
}
