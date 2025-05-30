#include <bits/stdc++.h>
using namespace std;

int main()
{
    cout << "\n\n[ CREATING Prefix Array ]\n\n";
    cout << "Enter Size of the Original Array:\n> ";
    int n=0;
    cin >> n;

    int arr[n];
    cout <<"\n\nEnter values to the Original Array:\n>\n";
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];

    }
    cout <<"\n\nEntered Array:\n";
    for(int i=0; i<n; i++)
    {
        cout << arr[i] << " ";
    }

    int pre[n];
    pre[0]=arr[0]; // sinze we addressed the first index
    for(int i=1; i<n; i++) // initial index is 1 for loop
    {
        pre[i]=pre[i-1]+arr[i]; //Cumulating with previous pre[] element
    }

    cout <<"\n\nCreated Prefix Array is:\n\n";
    for(int i=0; i<n; i++)
    {
        cout << pre[i] << " ";
    }

    cout <<"\n\n[ CHECKING Prefix Sum ]\n\n";

    cout <<"Enter number of operations (Queries):\n> ";
    int q;
    cin >> q;
    int L,R=n-1,Sum,cnt=0;
    while(q--)
    {
        Sum = 0;
        cnt++;
        printf("\n\n[ Query no. %d ]\n\n",cnt);
        cout << "\n\nEnter Leftmost Range:\n> ";
        cin >> L;
        cout << "\n\nEnter Rightmost Range:\n> ";
        cin >> R;

        if(L==0)
        {
            cout << "Sum is = " << pre[R] <<"\n\n";
        }
        else
        {
            Sum = pre[R]-pre[L-1];
            cout << "Sum is = " << Sum <<"\n\n";
        }

    }
    cout <<"\n\n[ All Operations are COMPLETE ]\n\n\n";




    return 0;
}
